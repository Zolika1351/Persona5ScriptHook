#include "imgui.cpp"
#include "imgui_impl_win32.cpp"
#include "imgui_impl_dx11.cpp"
#include "imgui_draw.cpp"
#include "imgui_demo.cpp"
#include "imgui_tables.cpp"
#include "imgui_widgets.cpp"

ID3D11Device* g_pD3DDevice = nullptr;
ID3D11DeviceContext* g_pD3DContext = nullptr;
ID3D11RenderTargetView* g_pD3DRT = nullptr;
IDXGISwapChain* g_pD3DSwapChain = nullptr;

bool SetUpImGui(IDXGISwapChain* pSwapChain)
{
	static bool bFirst = 1;
	if (bFirst)
	{
		ImGui::CreateContext();
		ImGui_ImplWin32_Init(GetGameHWND());
		bFirst = 0;
	}

	g_pD3DSwapChain = pSwapChain;

	if (!ImGui::GetIO().BackendRendererUserData)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(IID_PPV_ARGS(&g_pD3DDevice))))
		{
			g_pD3DDevice->GetImmediateContext(&g_pD3DContext);
			ImGui_ImplDX11_Init(g_pD3DDevice, g_pD3DContext);
		}
	}

	if (!g_pD3DRT)
	{
		ID3D11Texture2D* pBackBuffer = nullptr;
		if (SUCCEEDED(pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer))))
		{
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);

			D3D11_RENDER_TARGET_VIEW_DESC desc = {};
			desc.Format = sd.BufferDesc.Format;
			desc.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;

			g_pD3DDevice->CreateRenderTargetView(pBackBuffer, &desc, &g_pD3DRT);
			pBackBuffer->Release();
		}
	}

	if (g_pD3DRT)
	{
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		return 1;
	}
	return 0;
}

void RenderImGui()
{
	ImGui::Render();

	g_pD3DContext->OMSetRenderTargets(1, &g_pD3DRT, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

void CleanUpImGui()
{
	if (GImGui && g_pD3DRT)
	{
		g_pD3DRT->Release();
		g_pD3DRT = nullptr;
	}
}