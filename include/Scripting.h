namespace Scripting
{
	void SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SYNC); }
	void WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::WAIT, a1); }
	void PUT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUT, a1); }
	void PUTS(char* a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUTS, a1); }
	void PUTF(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUTF, a1); }
	void MSG(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG, a1, a2); }
	void _NULL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::_NULL); }
	void FADEIN(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FADEIN, a1, a2); }
	void FADEOUT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FADEOUT, a1, a2); }
	void FADEEND_CHECK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FADEEND_CHECK); }
	void FADE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FADE_SYNC); }
	void FADE_COLOR(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FADE_COLOR, a1, a2, a3); }
	int BIT_CHK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BIT_CHK, a1); }
	void BIT_ON(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BIT_ON, a1); }
	void BIT_OFF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BIT_OFF, a1); }
	int GET_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_COUNT, a1); }
	void SET_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_COUNT, a1, a2); }
	int RND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::RND, a1); }
	void LIFESIM_SET_IMAGE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LIFESIM_SET_IMAGE, a1, a2); }
	void MDL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_VISIBLE, a1, a2); }
	void LIFESIM_SHOW_BUSTUP(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LIFESIM_SHOW_BUSTUP, a1, a2, a3, a4); }
	void LIFESIM_HIDE_BUSTUP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LIFESIM_HIDE_BUSTUP, a1); }
	void LIFESIM_MOUSEANIM_ENABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LIFESIM_MOUSEANIM_ENABLE, a1, a2); }
	void MDL_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM, a1, a2, a3, a4, a5); }
	void MDL_ANIM_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_SYNC, a1); }
	void CALL_CALENDAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CALENDAR); }
	void SET_NEXT_DAY(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_NEXT_DAY, a1, a2, a3); }
	int GET_DAY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DAY); }
	int GET_TIME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_TIME); }
	int CHK_DAYS(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_DAYS, a1, a2); }
	int GET_DAYOFWEEK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DAYOFWEEK); }
	void SCENE_CHANGE_WAIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SCENE_CHANGE_WAIT); }
	void MOVIE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MOVIE_PLAY, a1); }
	void MOVIE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MOVIE_SYNC); }
	void MSG_WND_DSP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_WND_DSP); }
	void MSG_WND_CLS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_WND_CLS); }
	int SEL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL, a1); }
	void SEL_WND_DSP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_WND_DSP); }
	void SEL_WND_CLS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_WND_CLS); }
	void SET_MSG_VAR(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_MSG_VAR, a1, a2, a3); }
	void SEL_DEFKEY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_DEFKEY, a1, a2); }
	void SEL_MASK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_MASK, a1); }
	void MSG_SYSTEM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_SYSTEM, a1); }
	int CAMERA_READ(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_READ, a1, a2, a3); }
	void CAMERA_READ_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_READ_SYNC, a1); }
	void CAMERA_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_FREE, a1); }
	void CAMERA_SET(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SET, a1); }
	void CAMERA_RESET() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_RESET); }
	void CAMERA_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_ANIM, a1, a2, a3, a4, a5); }
	void CAMERA_ANIM_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_ANIM_SYNC, a1); }
	void MDL_ANIM_SEEK(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_SEEK, a1, a2); }
	void MDL_ANIM_FRAMESYNC(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_FRAMESYNC, a1, a2); }
	void MDL_SET_SCALE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_SCALE, a1, a2); }
	int ADD_PC_MONEY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PC_MONEY, a1); }
	int GET_SMN_LEVEL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SMN_LEVEL, a1); }
	int GET_HP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_HP, a1); }
	int GET_MAXHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MAXHP, a1); }
	void SET_HP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_HP, a1, a2); }
	int GET_SP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SP, a1); }
	int GET_MAXSP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MAXSP, a1); }
	void SET_SP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_SP, a1, a2); }
	int GET_ITEM_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_NUM, a1); }
	void SET_ITEM_NUM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_ITEM_NUM, a1, a2); }
	int GET_EQUIP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_EQUIP, a1, a2); }
	void SET_EQUIP(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_EQUIP, a1, a2, a3); }
	void PARTY_IN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PARTY_IN, a1); }
	void PARTY_OUT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PARTY_OUT, a1); }
	int GET_PARTY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PARTY, a1); }
	void RECOVERY_ALL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RECOVERY_ALL); }
	int GET_AND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_AND, a1, a2); }
	int GET_OR(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_OR, a1, a2); }
	int GET_XOR(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_XOR, a1, a2); }
	int GET_L_SHIFT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_L_SHIFT, a1, a2); }
	int GET_R_SHIFT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_R_SHIFT, a1, a2); }
	int REM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::REM, a1, a2); }
	int SCRIPT_READ(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SCRIPT_READ, a1, a2, a3); }
	void SCRIPT_READ_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SCRIPT_READ_SYNC, a1); }
	void SCRIPT_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SCRIPT_FREE, a1); }
	void SCRIPT_EXEC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SCRIPT_EXEC, a1, a2); }
	int SCRIPT_SEARCH(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SCRIPT_SEARCH, a1, a2, a3); }
	void CAMERA_SET_HELPERPOS(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SET_HELPERPOS, a1, a2, a3); }
	void RUMBLE_START_L(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_START_L, a1, a2, a3, a4, a5); }
	void RUMBLE_STOP_L() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_STOP_L); }
	void RUMBLE_START_S(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_START_S, a1, a2, a3, a4); }
	void RUMBLE_STOP_S() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_STOP_S); }
	void RUMBLE_STOP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_STOP); }
	void RUMBLE_CHECK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RUMBLE_CHECK); }
	int CHK_DAYS_STARTEND(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_DAYS_STARTEND, a1, a2, a3, a4); }
	void SAVE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE); }
	int SAVE_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE_SYNC); }
	void SAVE_MENU() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE_MENU); }
	void SAVE_MENU_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE_MENU_SYNC); }
	void BGM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGM, a1); }
	void PAD_TRIG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PAD_TRIG, a1); }
	void PAD_PRESS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PAD_PRESS, a1); }
	int MSG_SELECT(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_SELECT, a1, a2, a3); }
	void MSG_TUTORIAL(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TUTORIAL, a1, a2, a3); }
	void DATE_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DATE_DISP, a1); }
	void BGM_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGM_STOP, a1); }
	void SET_DBG_DAY(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_DBG_DAY, a1, a2, a3); }
	void MDL_ANIM_SPEED(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_SPEED, a1, a2); }
	void MDL_ANIM_NEXT(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_NEXT, a1, a2, a3, a4, a5); }
	int MDL_ICON(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ICON, a1, a2); }
	int GET_PC_PARAM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PC_PARAM, a1, a2); }
	int GET_PC_PARAM_LV(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PC_PARAM_LV, a1, a2); }
	void UPDATE_ENQUETE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::UPDATE_ENQUETE); }
	void ADD_PC_PARAM_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PC_PARAM_SYNC); }
	void SET_SUSPICION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_SUSPICION, a1); }
	void ADD_SUSPICION_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_SUSPICION_START, a1); }
	void ADD_SUSPICION_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_SUSPICION_SYNC); }
	int GET_SUSPICION() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SUSPICION); }
	int GET_SUSPICION_LV() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SUSPICION_LV); }
	void DBG_SCRIPT_MENU(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DBG_SCRIPT_MENU, a1); }
	int GET_TOTAL_DAY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_TOTAL_DAY); }
	int GET_MONTH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MONTH); }
	int GET_WEATHER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_WEATHER); }
	int GET_MOON_AGE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MOON_AGE); }
	void ADD_SUSPICION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_SUSPICION, a1); }
	void DISP_CAUTION() { ScriptingInvoke::Invoke<int>(ScriptFunctions::DISP_CAUTION); }
	int PAD_CHK_TRIG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::PAD_CHK_TRIG, a1); }
	int PAD_CHK_PRESS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::PAD_CHK_PRESS, a1); }
	void EVERY_MORNING_NETWORK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVERY_MORNING_NETWORK); }
	void ZEAL_TEX_READ(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ZEAL_TEX_READ, a1, a2); }
	void ZEAL_TEX_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ZEAL_TEX_SYNC, a1); }
	void ZEAL_TEX_DISP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ZEAL_TEX_DISP, a1, a2); }
	void ZEAL_TEX_FREE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ZEAL_TEX_FREE, a1, a2); }
	void BGENV_SE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_PLAY, a1); }
	void BGENV_SE_FADEOUT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_FADEOUT, a1, a2); }
	void BGENV_SE_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_STOP, a1); }
	int BGENV_SE_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_CHECK, a1); }
	void MESSAGE_REF(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MESSAGE_REF, a1, a2); }
	void MSG_CAPTION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_CAPTION, a1); }
	void MSG_MIND(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_MIND, a1, a2); }
	void SET_SUSPICION_LV(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_SUSPICION_LV, a1); }
	void COMSE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::COMSE_PLAY, a1); }
	void COMSE_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::COMSE_STOP, a1); }
	void LOGICTREE_OPEN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_OPEN, a1); }
	void LOGICTREE_OPEN_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_OPEN_SYNC); }
	void LOGICTREE_CLOSE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_CLOSE); }
	void LOGICTREE_CLOSE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_CLOSE_SYNC); }
	void LOGICTREE_SET_BRANCH(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_SET_BRANCH, a1, a2, a3); }
	void LOGICTREE_RESET_BRANCH(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_RESET_BRANCH, a1); }
	void LOGICTREE_CLEAR_BRANCH() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOGICTREE_CLEAR_BRANCH); }
	int MDL_GET_ANIM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_ANIM, a1); }
	void CHAT_WND_DSP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_WND_DSP); }
	void CHAT_WND_CLS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_WND_CLS); }
	void MSG_TREE_SET_ROOT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TREE_SET_ROOT, a1, a2, a3); }
	void MSG_TREE_SET_NODE(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TREE_SET_NODE, a1, a2, a3, a4, a5, a6, a7); }
	void MSG_TREE_OPEN() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TREE_OPEN); }
	int MSG_TREE_GET_MISS_COUNT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TREE_GET_MISS_COUNT); }
	void CAMERA_QUAKE_START(float a1, float a2, float a3, float a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_QUAKE_START, a1, a2, a3, a4, a5); }
	void CAMERA_QUAKE_STOP(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_QUAKE_STOP, a1); }
	void MDL_ANIM_BLENDSYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_BLENDSYNC, a1); }
	void TIMER_SETUP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_SETUP); }
	void TIMER_SETUP_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_SETUP_SYNC); }
	void TIMER_DESTROY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_DESTROY); }
	void TIMER_SET_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_SET_VISIBLE, a1); }
	int TIMER_GET_VISIBLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_GET_VISIBLE); }
	void TIMER_SET_PAUSE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_SET_PAUSE, a1); }
	int TIMER_GET_PAUSE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_GET_PAUSE); }
	void TIMER_SET_TIME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_SET_TIME, a1); }
	void TIMER_ADD_TIME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_ADD_TIME, a1); }
	int TIMER_GET_TIME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::TIMER_GET_TIME); }
	int MDL_GET_ITEM_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_ITEM_RESHND, a1, a2); }
	void MDL_ADD_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ADD_ANIM, a1, a2, a3, a4, a5); }
	void MDL_ADD_ANIM_NEXT(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ADD_ANIM_NEXT, a1, a2, a3, a4, a5); }
	void MDL_ADD_SYNC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ADD_SYNC, a1, a2); }
	int SEL_TIME_LIMIT(int a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_TIME_LIMIT, a1, a2); }
	int MDL_GET_ANIM_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_ANIM_COUNT, a1); }
	void MSG_WND_SET_POS(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_WND_SET_POS, a1, a2, a3); }
	void MSG_WND_RESET_POS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_WND_RESET_POS); }
	void CAMERA_SHAKE_START(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SHAKE_START, a1, a2, a3); }
	void CAMERA_SHAKE_PAUSE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SHAKE_PAUSE); }
	void CAMERA_SHAKE_STOP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SHAKE_STOP); }
	void CAMERA_SHAKE_SCALE(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SHAKE_SCALE, a1); }
	void CAMERA_SHAKE_SPEED(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SHAKE_SPEED, a1); }
	int ANALOG_ASTICK_CHECK(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::ANALOG_ASTICK_CHECK, a1, a2, a3); }
	void MDL_TRACK_ADD_ANIM(int a1, int a2, int a3, int a4, int a5, float a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_TRACK_ADD_ANIM, a1, a2, a3, a4, a5, a6); }
	void MDL_TRACK_ADD_ANIM_NEXT(int a1, int a2, int a3, int a4, int a5, float a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_TRACK_ADD_ANIM_NEXT, a1, a2, a3, a4, a5, a6); }
	void MDL_TRACK_ADD_ANIM_SYNC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_TRACK_ADD_ANIM_SYNC, a1, a2); }
	float SIN(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::SIN, a1); }
	float COS(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::COS, a1); }
	float TAN(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::TAN, a1); }
	float ASIN(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::ASIN, a1); }
	float ACOS(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::ACOS, a1); }
	float ATAN(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::ATAN, a1); }
	float ATAN2(float a1, float a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::ATAN2, a1, a2); }
	float SQRT(float a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::SQRT, a1); }
	void PUSH_UNIFORM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUSH_UNIFORM, a1, a2); }
	void POP_UNIFORM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::POP_UNIFORM, a1); }
	void CLEAR_UNIFORM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CLEAR_UNIFORM); }
	void PUSH_WEATHER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUSH_WEATHER, a1); }
	void POP_WEATHER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::POP_WEATHER); }
	void CLEAR_WEATHER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CLEAR_WEATHER); }
	void BGENV_SE_PLAY_CUEID(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_PLAY_CUEID, a1); }
	void BGENV_SE_FADEOUT_CUEID(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_FADEOUT_CUEID, a1, a2); }
	void BGENV_SE_STOP_CUEID(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_STOP_CUEID, a1); }
	int BGENV_SE_CHECK_CUEID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_CHECK_CUEID, a1); }
	void SKILL_ADD(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILL_ADD, a1, a2); }
	void SKILL_ADD_CMM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILL_ADD_CMM, a1, a2); }
	int FRIEND_SKILL_ADD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FRIEND_SKILL_ADD, a1, a2); }
	int CHK_FRIEND_SKILL_ADD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_FRIEND_SKILL_ADD, a1, a2); }
	int NEXT_SKILL_ADD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NEXT_SKILL_ADD, a1); }
	int CHK_NEXT_SKILL_ADD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_NEXT_SKILL_ADD); }
	void TEST_TEX_READ(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_READ, a1, a2); }
	void TEST_TEX_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_SYNC, a1); }
	void TEST_TEX_DISP(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_DISP, a1, a2, a3, a4); }
	void TEST_TEX_FREE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_FREE, a1, a2); }
	int GET_MONTH_TOTAL_DAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MONTH_TOTAL_DAY, a1); }
	int GET_DAY_TOTAL_DAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DAY_TOTAL_DAY, a1); }
	void BIT_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BIT_SYNC, a1); }
	int GET_WEATHER_DETAIL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_WEATHER_DETAIL); }
	void SET_HUMAN_LV(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_HUMAN_LV, a1, a2); }
	void SET_PERSONA_LV(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_PERSONA_LV, a1, a2, a3); }
	void CLEAR_PERSONA_STOCK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CLEAR_PERSONA_STOCK); }
	void ADD_PERSONA_STOCK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PERSONA_STOCK, a1); }
	void ADD_PC_ALL_PARAM(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PC_ALL_PARAM, a1, a2, a3, a4, a5); }
	void SKILL_ADD_ARSENE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILL_ADD_ARSENE, a1); }
	int MDL_GET_MAJOR_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_MAJOR_ID, a1); }
	int MDL_GET_MINOR_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_MINOR_ID, a1); }
	int MDL_GET_SUB_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_GET_SUB_ID, a1); }
	void ADD_MAIN_PERSONA_PARAM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_MAIN_PERSONA_PARAM, a1, a2, a3); }
	int GET_MAIN_PERSONA_PARAM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MAIN_PERSONA_PARAM, a1, a2); }
	void ADD_EQUIP_PERSONA_PARAM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_EQUIP_PERSONA_PARAM, a1, a2, a3); }
	void ADD_EQUIP_PERSONA_PARAM_INC(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_EQUIP_PERSONA_PARAM_INC, a1, a2, a3); }
	int GET_EQUIP_PERSONA_PARAM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_EQUIP_PERSONA_PARAM, a1, a2); }
	void KTAI_MENU_START() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_START); }
	void KTAI_MENU_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_VISIBLE, a1); }
	void KTAI_MENU_FADE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_FADE, a1); }
	void KTAI_MENU_FADE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_FADE_SYNC); }
	int KTAI_MENU_GET_PAD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_GET_PAD); }
	void KTAI_MENU_EXIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KTAI_MENU_EXIT); }
	void DBG_PUTS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DBG_PUTS, a1); }
	float GET_MAX(float a1, float a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::GET_MAX, a1, a2); }
	float GET_MIN(float a1, float a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::GET_MIN, a1, a2); }
	void ADD_PERSONA_SKILL(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PERSONA_SKILL, a1, a2, a3); }
	void REMOVE_PERSONA_SKILL(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::REMOVE_PERSONA_SKILL, a1, a2, a3); }
	void BGENV_SE_PLAY_CUEID_ALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_PLAY_CUEID_ALL, a1); }
	void BGENV_SE_FADEOUT_CUEID_ALL(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_FADEOUT_CUEID_ALL, a1, a2); }
	void BGENV_SE_STOP_CUEID_ALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_SE_STOP_CUEID_ALL, a1); }
	void SND_VOICE_FACILITY_SETUP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_FACILITY_SETUP, a1); }
	void SND_VOICE_FACILITY_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_FACILITY_SYNC); }
	void BGENV_LINK_BGOBJ(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINK_BGOBJ, a1, a2, a3); }
	void BGENV_UNLINK_BGOBJ(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_UNLINK_BGOBJ, a1); }
	int NPC_BIT_CHK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_BIT_CHK, a1); }
	void NPC_BIT_ON(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_BIT_ON, a1); }
	void NPC_BIT_OFF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_BIT_OFF, a1); }
	void ADD_MAXHP_UP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_MAXHP_UP, a1, a2); }
	int GET_MAXHP_UP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MAXHP_UP, a1); }
	void ADD_MAXSP_UP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_MAXSP_UP, a1, a2); }
	int GET_MAXSP_UP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MAXSP_UP, a1); }
	void BGENV_LINE_SE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINE_SE_PLAY, a1); }
	void BGENV_LINE_SE_FADEOUT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINE_SE_FADEOUT, a1, a2); }
	void BGENV_LINE_SE_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINE_SE_STOP, a1); }
	int BGENV_LINE_SE_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINE_SE_CHECK, a1); }
	void BGENV_DEF_SE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_DEF_SE_PLAY, a1); }
	void BGENV_DEF_SE_FADEOUT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_DEF_SE_FADEOUT, a1, a2); }
	void BGENV_DEF_SE_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_DEF_SE_STOP, a1); }
	int BGENV_DEF_SE_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_DEF_SE_CHECK, a1); }
	int NPC_EXIST_VALUE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_EXIST_VALUE, a1); }
	int NPC_EXIST_VALUE_MD(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_EXIST_VALUE_MD, a1, a2, a3); }
	int NPC_QUEST_GET_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_QUEST_GET_NUM); }
	int NPC_QUEST_GET_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_QUEST_GET_ID, a1); }
	int SEL_GENERIC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC, a1, a2); }
	void GET_DBG_NUM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DBG_NUM); }
	void NPC_QUEST_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_QUEST_START, a1); }
	void NPC_QUEST_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_QUEST_END, a1); }
	void NPC_QUEST_CLEAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::NPC_QUEST_CLEAR); }
	void COMENV_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::COMENV_PLAY, a1); }
	void COMENV_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::COMENV_STOP, a1); }
	void VOICE1_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE1_PLAY, a1); }
	void VOICE1_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE1_STOP, a1); }
	void VOICE2_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE2_PLAY, a1); }
	void VOICE2_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE2_STOP, a1); }
	void VOICE3_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE3_PLAY, a1); }
	void VOICE3_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE3_STOP, a1); }
	int TBL_365_VALUE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::TBL_365_VALUE, a1); }
	int TBL_365_VALUE_MD(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::TBL_365_VALUE_MD, a1, a2, a3); }
	void NEXT_TIME() { ScriptingInvoke::Invoke<int>(ScriptFunctions::NEXT_TIME); }
	void MDL_SET_LOOKAT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_LOOKAT, a1, a2, a3); }
	void MDL_RESET_LOOKAT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_RESET_LOOKAT, a1, a2); }
	int CHK_PERSONA_EXIST(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_PERSONA_EXIST, a1, a2); }
	int GET_DAY_WEATHER(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DAY_WEATHER, a1, a2); }
	int GET_DAY_WEATHER_DETAIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DAY_WEATHER_DETAIL, a1, a2); }
	int CHK_EXIST_WEATHER(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_EXIST_WEATHER, a1, a2, a3); }
	int CHK_EXIST_WEATHER_DETAIL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_EXIST_WEATHER_DETAIL, a1, a2, a3); }
	void SEL_OPEN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_OPEN, a1); }
	void MDL_ANIM_NO_SE(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_NO_SE, a1, a2, a3, a4, a5); }
	void TROPHY_REQUEST(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TROPHY_REQUEST, a1, a2); }
	void PERSONA_EVOLUTION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PERSONA_EVOLUTION, a1); }
	int GET_PC_PARAM_DIFFERENCE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PC_PARAM_DIFFERENCE, a1); }
	int SEL_GENERIC_NOT_CANCEL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC_NOT_CANCEL, a1, a2); }
	void FOOTSTEP_SE_PLAYER_CREATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FOOTSTEP_SE_PLAYER_CREATE, a1); }
	void FOOTSTEP_SE_ENABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FOOTSTEP_SE_ENABLE, a1, a2); }
	void FOOTSTEP_EFFECT_ENABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FOOTSTEP_EFFECT_ENABLE, a1, a2); }
	void FOOTSTEP_EFFECT2_ENABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FOOTSTEP_EFFECT2_ENABLE, a1, a2); }
	void FOOTSTEP_EFFECT_SCALE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FOOTSTEP_EFFECT_SCALE, a1, a2); }
	void BGTEX_STRIP_ENABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGTEX_STRIP_ENABLE, a1); }
	void BGENV_LINK_BGOBJ_INDEX(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINK_BGOBJ_INDEX, a1, a2, a3); }
	void RESET_PC_PARAM_UP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RESET_PC_PARAM_UP); }
	void DISP_PC_PARAM_METER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::DISP_PC_PARAM_METER); }
	int GET_HERO_WANTED_EXP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_HERO_WANTED_EXP, a1); }
	void DISP_PC_PARAM_RANK_UP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::DISP_PC_PARAM_RANK_UP); }
	void SAVE_UI_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE_UI_SYNC); }
	int CHK_PC_PARAM_RANKUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_PC_PARAM_RANKUP, a1); }
	void GET_ITEM_WINDOW(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_WINDOW, a1, a2, a3); }
	void GET_MONEY_WINDOW(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_MONEY_WINDOW, a1, a2); }
	void GET_PERSONA_WINDOW(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PERSONA_WINDOW, a1, a2); }
	void MSG_PERFORMANCE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_PERFORMANCE, a1); }
	int CALL_STAMP_SAVE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_STAMP_SAVE, a1); }
	int CALL_CLEAR_SAVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CLEAR_SAVE); }
	void BULLET_RECOVERY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BULLET_RECOVERY, a1); }
	void BGENV_AISAC_FADEOUT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_AISAC_FADEOUT, a1, a2, a3); }
	void BGENV_AISAC_FADEIN(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_AISAC_FADEIN, a1, a2, a3); }
	void BGENV_AISAC_FADESYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_AISAC_FADESYNC, a1); }
	void BGM_FADEIN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGM_FADEIN, a1); }
	void TEST_TEX_DISP2(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_DISP2, a1, a2, a3, a4); }
	void DAY_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DAY_DISP, a1); }
	void SND_VOICE_DNGEVT_SETUP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DNGEVT_SETUP, a1, a2); }
	void SND_VOICE_DNGEVT_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DNGEVT_SYNC); }
	void SND_VOICE_DNGEVT_FREE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DNGEVT_FREE); }
	void TEST_TEX_DISP3(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_DISP3, a1, a2, a3); }
	void TEST_TEX_MOVE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::TEST_TEX_MOVE, a1, a2); }
	void DISABLE_SHARE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DISABLE_SHARE_PLAY, a1); }
	void ENABLE_SHARE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ENABLE_SHARE_PLAY, a1); }
	void ALL_ENABLE_SHARE_PLAY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::ALL_ENABLE_SHARE_PLAY); }
	void MDL_SET_LOOKAT_LIMIT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_LOOKAT_LIMIT, a1, a2); }
	void SND_VOICE_BGMOB_DISABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_BGMOB_DISABLE, a1); }
	void GOOD_GAUGE_DISP_ON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_DISP_ON); }
	void GOOD_GAUGE_DISP_OFF() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_DISP_OFF); }
	void GET_ITEMS_WINDOW(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEMS_WINDOW, a1); }
	void GET_ITEM_BUF_SET(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_BUF_SET, a1, a2); }
	void GET_ITEM_BUF_RESET() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_BUF_RESET); }
	int CHK_PERSONA_IS_JAIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_PERSONA_IS_JAIL, a1); }
	void MDL_EMOTE_ANIM(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_EMOTE_ANIM, a1, a2, a3, a4); }
	int SEL_GENERIC_EX(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC_EX, a1, a2, a3, a4); }
	int SEL_GENERIC_NOT_HELP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC_NOT_HELP, a1, a2); }
	void MDL_SET_LOOKAT_MOTION(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_LOOKAT_MOTION, a1, a2, a3, a4); }
	void MDL_SET_LOOKAT_HORIZON(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_LOOKAT_HORIZON, a1, a2, a3); }
	int GET_CLOTH_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_CLOTH_TYPE); }
	int GET_YASUMI_SET_DAYS(float a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_YASUMI_SET_DAYS, a1, a2); }
	int GET_TOTALDAY_SET_DAYS(float a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_TOTALDAY_SET_DAYS, a1, a2); }
	void CAMERA_SET_RESRC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_SET_RESRC, a1, a2); }
	void MSG_TRIVIA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_TRIVIA, a1); }
	void MDL_ANIM_LOOPSYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_LOOPSYNC, a1); }
	void CHAT_MSG(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_MSG, a1, a2); }
	int CHAT_SEL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SEL, a1); }
	void MDL_ANIM_LINK_SE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_LINK_SE, a1, a2); }
	void MDL_ANIM_UNLINK_SE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_UNLINK_SE, a1); }
	void MDL_SET_LOOKAT_POS(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_SET_LOOKAT_POS, a1, a2, a3, a4, a5); }
	void LOADING_ICON_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LOADING_ICON_DISP, a1); }
	void GOOD_GAUGE_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_START, a1); }
	void GOOD_GAUGE_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_END); }
	int GET_SEASON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SEASON); }
	void GOOD_GAUGE_START_EX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_START_EX); }
	void INIT_ITEM_SELECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::INIT_ITEM_SELECT); }
	void SET_ITEM_SELECT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_ITEM_SELECT, a1); }
	int START_ITEM_SELECT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_ITEM_SELECT, a1); }
	void CAMERA_QUAKE_2_START(float a1, float a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_QUAKE_2_START, a1, a2, a3, a4, a5, a6); }
	void CAMERA_QUAKE_2_STOP(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CAMERA_QUAKE_2_STOP, a1); }
	void MDL_ICON_END(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ICON_END, a1, a2); }
	int MDL_ICON_EX(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ICON_EX, a1, a2, a3); }
	void MDL_ICON_SET_SCALE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ICON_SET_SCALE, a1, a2); }
	void CLEAR_INHERIT_DATA() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CLEAR_INHERIT_DATA); }
	void GOOD_GAUGE_LOAD_EX(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_LOAD_EX, a1, a2); }
	void GOOD_GAUGE_SYNC_EX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_SYNC_EX); }
	void GOOD_GAUGE_END_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::GOOD_GAUGE_END_SYNC); }
	void MDL_TRACK_CLEAR_ANIM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_TRACK_CLEAR_ANIM, a1, a2); }
	void START_PLAY_GO_CHECK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::START_PLAY_GO_CHECK); }
	int SYNC_PLAY_GO_CHECK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SYNC_PLAY_GO_CHECK); }
	void NET_DISCONNECT_MATCH() { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_DISCONNECT_MATCH); }
	void CALL_FIELD(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_FIELD, a1, a2, a3, a4); }
	int FLD_GET_SCRIPT_TIMING() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCRIPT_TIMING); }
	void FLD_PC_MODEL_CHANGE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_CHANGE); }
	int FLD_PC_GET_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_GET_RESHND, a1); }
	int FLD_NPC_GET_RESHND() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GET_RESHND); }
	void FLD_CAMERA_LOCK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_LOCK); }
	void FLD_CAMERA_UNLOCK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_UNLOCK); }
	int FLD_OBJ_GET_RESHND() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_GET_RESHND); }
	int FLD_OPEN_DOOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_DOOR); }
	int FLD_GET_TBOX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TBOX); }
	int FLD_GET_TBOX_FLAG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TBOX_FLAG); }
	void FLD_SWITCH_FAILURE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_FAILURE, a1); }
	void FLD_PC_MODEL_SET_POS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_POS, a1); }
	int FLD_OPEN_DOOR_NO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_DOOR_NO, a1); }
	void FLD_SET_SUBJECT_MODE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SUBJECT_MODE, a1); }
	void FLD_SOBJ_RECOVER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SOBJ_RECOVER); }
	void FLD_NEXT_DNG_LEVEL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NEXT_DNG_LEVEL, a1); }
	int FLD_GET_DNG_LEVEL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DNG_LEVEL); }
	void FLD_MAP_SEARCH() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MAP_SEARCH); }
	int FLD_GET_DNG_AREA_DIR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DNG_AREA_DIR); }
	void FLD_PC_MODEL_SET_DNG_POS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_DNG_POS); }
	void FLD_ROT_CAMERA(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROT_CAMERA, a1, a2); }
	void FLD_ROT_WORLD_CAMERA(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROT_WORLD_CAMERA, a1, a2); }
	void FLD_ROT_DOOR_CAMERA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROT_DOOR_CAMERA, a1); }
	void FLD_REPORT_MSG(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REPORT_MSG, a1, a2); }
	void FLD_REPORT_MSGSYNC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REPORT_MSGSYNC, a1, a2); }
	void FLD_REPORT_FREE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REPORT_FREE); }
	int FLD_GET_TARGET_ENEMY_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TARGET_ENEMY_TYPE); }
	int FLD_GET_ENCOUNTID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ENCOUNTID, a1); }
	int FLD_GET_MAJOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_MAJOR); }
	int FLD_GET_MINOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_MINOR); }
	void FLD_RETRY_SAVE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_SAVE); }
	void FLD_RETRY_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_LOAD); }
	void FLD_MODEL_SET_POS(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_POS, a1, a2); }
	int FLD_MODEL_LOADSYNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_LOADSYNC, a1); }
	int FLD_NPC_MODEL_LOAD(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_MODEL_LOAD, a1, a2, a3); }
	int FLD_OBJ_MODEL_LOAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_MODEL_LOAD, a1, a2); }
	int FLD_OBJ_MODEL_LOADSYNC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_MODEL_LOADSYNC, a1, a2); }
	void FLD_OBJ_MODEL_COLLIS(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_MODEL_COLLIS, a1, a2); }
	void FLD_NPC_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SYNC); }
	void CALL_BKUP_FIELD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BKUP_FIELD); }
	void FLD_SET_SAVE_COUNTER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SAVE_COUNTER, a1); }
	int FLD_GET_DNG_NO() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DNG_NO); }
	void FLD_DUNGEON_EFFECT_ENABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_EFFECT_ENABLE, a1); }
	void FLD_CINEMASCOPE_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CINEMASCOPE_VISIBLE, a1); }
	void FLD_REQ_FLASHBACK(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_FLASHBACK, a1, a2); }
	int FLD_CHECK_DNG_EDIT_FLOOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DNG_EDIT_FLOOR); }
	int FLD_OBJ_CNV_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_CNV_RESHND, a1); }
	void FLD_MODEL_SET_ROTATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_ROTATE, a1, a2, a3, a4, a5); }
	void FLD_MODEL_ADD_ROTATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ADD_ROTATE, a1, a2, a3, a4, a5); }
	void FLD_OPEN_ORD_DOOR(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_ORD_DOOR, a1); }
	int FLD_GET_ENEMY_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ENEMY_NUM); }
	int FLD_GET_TBOX_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TBOX_TYPE); }
	void FLD_SETUP_MOVIE_TEX(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SETUP_MOVIE_TEX, a1, a2); }
	void FLD_PLAY_MOVIE_TEX(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PLAY_MOVIE_TEX, a1, a2); }
	void FLD_PAUSE_MOVIE_TEX(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PAUSE_MOVIE_TEX, a1); }
	void FLD_SYNC_MOVIE_TEX(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_MOVIE_TEX, a1); }
	void FLD_OPEN_TBOX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_TBOX); }
	void FLD_EFFECT_SET_HELPERID_POS(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_HELPERID_POS, a1, a2, a3); }
	int FLD_ENEMY_MODEL_LOAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENEMY_MODEL_LOAD, a1); }
	int FLD_SYMBOL_MODEL_LOAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYMBOL_MODEL_LOAD, a1); }
	void FLD_END_FLASHBACK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_END_FLASHBACK); }
	int FLD_GET_ENCOUNT_ENEMY_ID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ENCOUNT_ENEMY_ID, a1, a2); }
	int FLD_GET_ENCOUNT_ENEMY_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ENCOUNT_ENEMY_NUM, a1); }
	void CALL_TITLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_TITLE); }
	float FLD_MODEL_GET_X_ROTATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_X_ROTATE, a1); }
	float FLD_MODEL_GET_Y_ROTATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Y_ROTATE, a1); }
	float FLD_MODEL_GET_Z_ROTATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Z_ROTATE, a1); }
	void FLD_MODEL_SYNC_ROTATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SYNC_ROTATE, a1); }
	int FLD_CAMERA_READ(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_READ, a1, a2, a3); }
	void FLD_CAMERA_READ_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_READ_SYNC, a1); }
	void FLD_CAMERA_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_FREE, a1); }
	void FLD_CAMERA_SET(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET, a1); }
	void FLD_CAMERA_RESET() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_RESET); }
	void FLD_CAMERA_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_ANIM, a1, a2, a3, a4, a5); }
	void FLD_CAMERA_ANIM_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_ANIM_SYNC, a1); }
	int FLD_SCRIPT_READ(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCRIPT_READ, a1, a2, a3); }
	void FLD_SCRIPT_READ_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCRIPT_READ_SYNC, a1); }
	void FLD_SCRIPT_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCRIPT_FREE, a1); }
	void FLD_SCRIPT_EXEC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCRIPT_EXEC, a1, a2); }
	int FLD_SCRIPT_SEARCH(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCRIPT_SEARCH, a1, a2, a3); }
	void FLD_CAMERA_SET_HELPERPOS(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_HELPERPOS, a1, a2, a3); }
	void FLD_UNIT_SET_EVT_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_EVT_WAIT, a1); }
	int FLD_SEARCH_DNG_NEAR_QUEST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_DNG_NEAR_QUEST); }
	void FLD_GET_SCH_OBJ_BEGIN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_BEGIN, a1); }
	void FLD_SET_DOF(float a1, float a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DOF, a1, a2, a3, a4, a5, a6); }
	void FLD_SET_DOF_DEFAULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DOF_DEFAULT, a1); }
	void FLD_SET_HDR(float a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_HDR, a1, a2, a3, a4); }
	void FLD_SET_HDR_STAR(int a1, float a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_HDR_STAR, a1, a2, a3, a4, a5, a6); }
	void FLD_SET_HDR_DEFAULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_HDR_DEFAULT, a1); }
	void FLD_SET_HDR_STAR_DEFAULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_HDR_STAR_DEFAULT, a1); }
	void FLD_ROT_OBJ_CAMERA(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROT_OBJ_CAMERA, a1, a2); }
	void FLD_PROHIBIT_ENEMY_PATH(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PROHIBIT_ENEMY_PATH, a1); }
	void FLD_START_SUPPORT_MSG() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_SUPPORT_MSG); }
	int FLD_CHECK_DUNGEON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DUNGEON); }
	int FLD_CHECK_AT_DUNGEON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_AT_DUNGEON); }
	void FLD_ROADMAP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP, a1); }
	void FLD_CAMERA_INTERP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_INTERP, a1); }
	void FLD_CAMERA_SYNC_INTERP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SYNC_INTERP); }
	void FLD_PC_MODEL_ATTACH_ITEM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_ATTACH_ITEM, a1, a2, a3); }
	void FLD_PC_MODEL_DETACH_ITEM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_DETACH_ITEM, a1, a2, a3); }
	void FLD_PC_ATTACH_ITEM_VISIBLE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_ATTACH_ITEM_VISIBLE, a1, a2, a3); }
	void FLD_TEX_TEST(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TEX_TEST, a1); }
	void FLD_TEX_TEST_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TEX_TEST_END); }
	void FLD_CAMERA_SET_POS(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_POS, a1, a2, a3); }
	void FLD_CAMERA_SET_ROT(float a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_ROT, a1, a2, a3, a4); }
	void FLD_ROADMAP_OPEN(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_OPEN, a1, a2, a3); }
	void FLD_ROADMAP_CLOSE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_CLOSE); }
	void FLD_ROADMAP_SET_LAYER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_SET_LAYER, a1); }
	void FLD_ROADMAP_MASK_ON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MASK_ON); }
	void FLD_ROADMAP_MASK_OFF() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MASK_OFF); }
	void FLD_ROADMAP_MASK_SETCLIP(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MASK_SETCLIP, a1, a2, a3); }
	void FLD_CAMERA_LOCK_INTERP(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_LOCK_INTERP, a1, a2, a3, a4, a5, a6, a7, a8); }
	void FLD_CAMERA_LOCK_SYNC_INTERP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_LOCK_SYNC_INTERP); }
	int FLD_EFFECT_START(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_START, a1); }
	int FLD_GET_ALERT_VALUE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ALERT_VALUE); }
	void FLD_SET_ALERT_VALUE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ALERT_VALUE, a1); }
	void FLD_CAMERA_SET_FIXED_COLLIS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_FIXED_COLLIS, a1); }
	void FLD_NPC_MODEL_READPAUSE_CANCEL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_MODEL_READPAUSE_CANCEL); }
	void FLD_CROWD_MODEL_READPAUSE_CANCEL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_MODEL_READPAUSE_CANCEL); }
	void FLD_SET_ENEMY_ENCOUNT_NO(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_ENCOUNT_NO, a1, a2, a3); }
	void FLD_PROHIBIT_ENEMY_AREA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PROHIBIT_ENEMY_AREA, a1); }
	void FLD_SET_SUMMON_LIFE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SUMMON_LIFE, a1, a2, a3); }
	void FLD_ROADMAP_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_SYNC); }
	void FLD_REQ_BGM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_BGM); }
	void FLD_SET_ENEMY_IGNORE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_IGNORE, a1, a2, a3); }
	void FLD_START_SMK_BALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_SMK_BALL, a1); }
	int FLD_SUMMON_ENEMY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SUMMON_ENEMY, a1, a2); }
	void FLD_MODEL_SET_TRANSLATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_TRANSLATE, a1, a2, a3, a4, a5); }
	void FLD_MODEL_ADD_TRANSLATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ADD_TRANSLATE, a1, a2, a3, a4, a5); }
	void FLD_MODEL_PATH_TRANSLATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_PATH_TRANSLATE, a1, a2, a3); }
	void FLD_MODEL_SYNC_TRANSLATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SYNC_TRANSLATE, a1); }
	int FLD_LOAD_PATH_DATA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LOAD_PATH_DATA, a1); }
	void FLD_SYNC_PATH_DATA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_PATH_DATA, a1); }
	void FLD_FREE_PATH_DATA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_FREE_PATH_DATA, a1); }
	int FLD_CHECK_DEBUG_FLAG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DEBUG_FLAG); }
	int FLD_NPC_SEARCH_RESHND(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SEARCH_RESHND, a1, a2, a3); }
	void FLD_SET_CELLPHONE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CELLPHONE, a1); }
	void FLD_PANEL_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_DISP, a1); }
	void FLD_EFFECT_BANK_LOAD(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_BANK_LOAD, a1, a2); }
	int FLD_EFFECT_BANK_SYNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_BANK_SYNC, a1); }
	void FLD_EFFECT_BANK_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_BANK_FREE, a1); }
	int FLD_EFFECT_BANK_START(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_BANK_START, a1); }
	void FLD_EFFECT_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_END, a1); }
	void FLD_EFFECT_FADE_OUT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_FADE_OUT, a1, a2); }
	void FLD_EFFECT_SET_POS(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_POS, a1, a2, a3, a4); }
	void FLD_EFFECT_SET_RES_POS(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_RES_POS, a1, a2); }
	void FLD_EFFECT_SET_ROT(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_ROT, a1, a2, a3, a4); }
	void FLD_EFFECT_SET_RES_ROT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_RES_ROT, a1, a2); }
	void FLD_EFFECT_SET_SCALE(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_SCALE, a1, a2, a3, a4); }
	void FLD_EFFECT_SET_ALPHA(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_ALPHA, a1, a2); }
	void FLD_EFFECT_SET_SPEED(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SET_SPEED, a1, a2); }
	void FLD_SEARCH_EFFECT_ON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_EFFECT_ON); }
	void FLD_SEARCH_EFFECT_OFF() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_EFFECT_OFF); }
	int FLD_SEARCH_EFFECT_CHECK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_EFFECT_CHECK); }
	void FLD_PANEL_HIDE_DISABLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_HIDE_DISABLE); }
	void FLD_CLEAR_SUMMON_ENEMY_ALL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLEAR_SUMMON_ENEMY_ALL); }
	void FLD_MODEL_RELATE_TRANSLATE(int a1, int a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_RELATE_TRANSLATE, a1, a2, a3, a4, a5, a6); }
	float FLD_MODEL_GET_X_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_X_TRANSLATE, a1); }
	float FLD_MODEL_GET_Y_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Y_TRANSLATE, a1); }
	float FLD_MODEL_GET_Z_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Z_TRANSLATE, a1); }
	void FLD_MODEL_ORIENT_ROTATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ORIENT_ROTATE, a1, a2, a3); }
	int FLD_GET_POS_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_POS_INDEX); }
	void FLD_CAMERA_LOOKAT_INTERP(float a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_LOOKAT_INTERP, a1, a2, a3, a4); }
	void FLD_CAMERA_FOVY_INTERP(float a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_FOVY_INTERP, a1, a2); }
	void FLD_MODEL_SET_VISIBLE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_VISIBLE, a1, a2, a3); }
	void FLD_MODEL_SYNC_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SYNC_VISIBLE, a1); }
	void FLD_PTY_MODEL_SET_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_VISIBLE, a1, a2); }
	void FLD_PTY_MODEL_SYNC_VISIBLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SYNC_VISIBLE); }
	void FLD_EMY_MODEL_SET_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EMY_MODEL_SET_VISIBLE, a1, a2); }
	void FLD_EMY_MODEL_SYNC_VISIBLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EMY_MODEL_SYNC_VISIBLE); }
	void FLD_START_FADE_DISABLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_FADE_DISABLE); }
	int FLD_GET_SCH_OBJ_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_ITEM, a1); }
	float FLD_MODEL_GET_DISTANCE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_DISTANCE, a1, a2); }
	float FLD_MODEL_GET_DIFF_X_ANGLE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_DIFF_X_ANGLE, a1, a2); }
	float FLD_MODEL_GET_DIFF_Y_ANGLE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_DIFF_Y_ANGLE, a1, a2); }
	float FLD_MODEL_GET_DIFF_Z_ANGLE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_DIFF_Z_ANGLE, a1, a2); }
	float FLD_CAMERA_GET_X_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_X_POS); }
	float FLD_CAMERA_GET_Y_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_Y_POS); }
	float FLD_CAMERA_GET_Z_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_Z_POS); }
	float FLD_CAMERA_GET_X_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_X_ROT); }
	float FLD_CAMERA_GET_Y_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_Y_ROT); }
	float FLD_CAMERA_GET_Z_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_Z_ROT); }
	float FLD_CAMERA_GET_W_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_W_ROT); }
	float FLD_CAMERA_GET_FOVY() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_CAMERA_GET_FOVY); }
	void FLD_NPC_RELOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_RELOAD); }
	int FLD_GET_SCH_OBJ_FIX_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_FIX_ITEM, a1); }
	int FLD_CHECK_FIND_SOMETHING() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_FIND_SOMETHING); }
	void FLD_PTY_FOLLOW_ENABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_FOLLOW_ENABLE, a1); }
	void FLD_CAMERA_SET_FIXED(float a1, float a2, float a3, float a4, float a5, float a6, float a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_FIXED, a1, a2, a3, a4, a5, a6, a7); }
	void FLD_SCH_OBJ_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SCH_OBJ_VISIBLE, a1, a2); }
	void FLD_START_BOSS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_BOSS, a1); }
	void FLD_RETRY_CLEAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_CLEAR); }
	void FLD_RETRY_BOSS_SAVE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_BOSS_SAVE); }
	void FLD_RETRY_BOSS_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_BOSS_LOAD); }
	void FLD_RETRY_BOSS_CLEAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RETRY_BOSS_CLEAR); }
	int FLD_GET_PREV_MAJOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PREV_MAJOR); }
	int FLD_GET_PREV_MINOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PREV_MINOR); }
	int FLD_GET_PREV_POS_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PREV_POS_INDEX); }
	void FLD_CAMERA_BEHIND_LOCK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_BEHIND_LOCK); }
	void FLD_CAMERA_BEHIND_UNLOCK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_BEHIND_UNLOCK); }
	void FLD_CAMERA_SET_PARAM(float a1, float a2, float a3, float a4, float a5, float a6, int a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_PARAM, a1, a2, a3, a4, a5, a6, a7); }
	void FLD_CAMERA_RESET_PARAM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_RESET_PARAM, a1); }
	void FLD_SET_COVER_STATE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_COVER_STATE); }
	void FLD_EFFECT_ATTACH_MODEL(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_ATTACH_MODEL, a1, a2); }
	int FLD_PC_ID_GET_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_ID_GET_RESHND, a1); }
	int FLD_PC_ID_CHECK_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_ID_CHECK_RESHND, a1, a2); }
	void FLD_PAUSE_ENEMY_MOVE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PAUSE_ENEMY_MOVE, a1, a2); }
	void FLD_RESUME_ENEMY_MOVE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RESUME_ENEMY_MOVE, a1, a2); }
	void FLD_MODEL_FREE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_FREE, a1); }
	void CALL_AT_DUNGEON(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_AT_DUNGEON, a1, a2, a3); }
	int FLD_GET_DOOR_DIR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DOOR_DIR); }
	void FLD_MISSION_LIST_ON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_ON); }
	void FLD_MISSION_LIST_OFF() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_OFF); }
	void FLD_MODEL_WALK_TRANSLATE(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_WALK_TRANSLATE, a1, a2, a3, a4); }
	void FLD_MODEL_RUN_TRANSLATE(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_RUN_TRANSLATE, a1, a2, a3, a4); }
	int FLD_MODEL_ADDMOTION_LOAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ADDMOTION_LOAD, a1, a2); }
	void FLD_MODEL_COPY_POSE_ANIM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_COPY_POSE_ANIM, a1, a2); }
	int FLD_MODEL_CLONE_ADDMOTION(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_CLONE_ADDMOTION, a1, a2); }
	void FLD_MODEL_REVERT_ADDMOTION(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_REVERT_ADDMOTION, a1, a2); }
	void FLD_START_BGM_DISABLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_BGM_DISABLE); }
	void FLD_MODEL_POINT_ROTATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_POINT_ROTATE, a1, a2, a3, a4, a5); }
	int FLD_ENCOUNT_SYMBOL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENCOUNT_SYMBOL, a1, a2, a3); }
	int FLD_SEARCH_CLOSEST_ENEMY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_CLOSEST_ENEMY); }
	int FLD_GET_WANTED_POINT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_WANTED_POINT); }
	void FLD_SET_WANTED_POINT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_WANTED_POINT, a1); }
	void FLD_ADD_WANTED_POINT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ADD_WANTED_POINT, a1); }
	int FLD_ENCOUNT_SYMBOL_FADE(int a1, int a2, int a3, int a4, int a5) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENCOUNT_SYMBOL_FADE, a1, a2, a3, a4, a5); }
	int CALL_LMAP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_LMAP, a1); }
	void FLD_START_FADE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_FADE_SYNC); }
	int FLD_NPC_MODEL_LOAD_BASE(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_MODEL_LOAD_BASE, a1, a2, a3, a4); }
	int FLD_ENCOUNT_SYMBOL_CLOSE(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENCOUNT_SYMBOL_CLOSE, a1, a2, a3); }
	int FLD_CHECK_BOSS() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_BOSS); }
	void FLD_WEAPON_MODEL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_WEAPON_MODEL_VISIBLE, a1, a2); }
	void FLD_GUN_MODEL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GUN_MODEL_VISIBLE, a1, a2); }
	void FLD_CELLPHONE_MODEL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CELLPHONE_MODEL_VISIBLE, a1, a2); }
	void FLD_BAG_MODEL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BAG_MODEL_VISIBLE, a1, a2); }
	void FLD_UMBRELLA_MODEL_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UMBRELLA_MODEL_VISIBLE, a1, a2); }
	void FLD_SET_LMAP_POS(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_LMAP_POS, a1, a2); }
	int FLD_GET_ENEMY_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ENEMY_RESHND, a1, a2); }
	void FLD_TUTORIAL_OK_ONLY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TUTORIAL_OK_ONLY); }
	int FLD_CLOSE_DOOR_NO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLOSE_DOOR_NO, a1); }
	void FLD_LOCAL_FLAG_ON(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LOCAL_FLAG_ON, a1); }
	void FLD_LOCAL_FLAG_OFF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LOCAL_FLAG_OFF, a1); }
	int FLD_LOCAL_FLAG_CHK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LOCAL_FLAG_CHK, a1); }
	void FLD_REQ_SCN_CHANGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_SCN_CHANGE, a1); }
	void FLD_MODEL_TRANSLATION_KEY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_TRANSLATION_KEY, a1); }
	void FLD_HIT_SET_TYPE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HIT_SET_TYPE, a1, a2, a3); }
	void FLD_HIT_RESET_TYPE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HIT_RESET_TYPE, a1); }
	int FLD_HIT_GET_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HIT_GET_TYPE, a1); }
	int FLD_HIT_GET_NAMEID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HIT_GET_NAMEID, a1); }
	void FLD_SOBJHIT_SET_TYPE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SOBJHIT_SET_TYPE, a1, a2, a3); }
	void FLD_SOBJHIT_RESET_TYPE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SOBJHIT_RESET_TYPE, a1); }
	int FLD_SOBJHIT_GET_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SOBJHIT_GET_TYPE, a1); }
	int FLD_SOBJHIT_GET_NAMEID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SOBJHIT_GET_NAMEID, a1); }
	void FLD_PLACE_NAME_SET_NO(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PLACE_NAME_SET_NO, a1, a2); }
	int FLD_NPC_SEARCH_RESHND2(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SEARCH_RESHND2, a1, a2, a3, a4); }
	void FLD_NPC_REMOVE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_REMOVE, a1); }
	void FLD_NPC_STOP_CHASE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_STOP_CHASE, a1); }
	int FLD_NPC_CHECK_CHASE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_CHECK_CHASE, a1); }
	void FLD_CAMERA_ZOOM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_ZOOM, a1); }
	void FLD_PLACENAME_TEX(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PLACENAME_TEX, a1, a2, a3, a4); }
	void FLD_NPC_START_CHASE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_START_CHASE, a1); }
	void FLD_UNIT_SET_COLLIS(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_COLLIS, a1, a2); }
	int FLD_NOT_OPEN_DOOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NOT_OPEN_DOOR); }
	int FLD_OPEN_DOOR_FADE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_DOOR_FADE); }
	void FLD_NPC_SET_LOOKAT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_LOOKAT, a1, a2); }
	void FLD_OPEN_TBOX_SIMPLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_TBOX_SIMPLE); }
	void FLD_SET_DIVDATA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DIVDATA, a1); }
	int FLD_GET_DIVDATA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DIVDATA); }
	void FLD_UPDATE_DIVDATA() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UPDATE_DIVDATA); }
	int FLD_GET_SCH_OBJ_RND_ITEM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_RND_ITEM, a1, a2); }
	void FLD_MODEL_UNIT_TRANSLATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_UNIT_TRANSLATE, a1, a2, a3, a4, a5); }
	int FLD_OPEN_FRIDGE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_FRIDGE, a1); }
	void FLD_CLOSE_FRIDGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLOSE_FRIDGE, a1); }
	void FLD_NPC_PRGANIM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_PRGANIM, a1, a2); }
	int FLD_PC_GET_CURRENT_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_GET_CURRENT_RESHND, a1); }
	int FLD_NPCID_SEARCH_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPCID_SEARCH_RESHND, a1); }
	int FLD_NPCID_SEARCH_RESHND2(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPCID_SEARCH_RESHND2, a1, a2); }
	int FLD_GET_DIV_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DIV_INDEX); }
	int FLD_GET_PREV_DIV_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PREV_DIV_INDEX); }
	void FLD_SWITCH_ON(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_ON, a1); }
	void FLD_GET_SCH_OBJ_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_END); }
	float FLD_POS_GET_X_POS(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_X_POS, a1); }
	float FLD_POS_GET_Y_POS(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_Y_POS, a1); }
	float FLD_POS_GET_Z_POS(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_Z_POS, a1); }
	void FLD_SFTYROOM_MENU() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU); }
	void FLD_SFTYROOM_MENU_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_SYNC); }
	void FLD_SFTYROOM_MENU_EXIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_EXIT); }
	void FLD_SFTYROOM_MENU_SETMASK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_SETMASK, a1); }
	void FLD_GREETING_MSG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_MSG, a1); }
	void FLD_GREETING_MSGSYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_MSGSYNC, a1); }
	void FLD_GREETING_FREE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_FREE); }
	int FLD_NPC_GET_DISTANCE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GET_DISTANCE); }
	void FLD_CAMERA_INTERP_SMOOTH(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_INTERP_SMOOTH, a1); }
	void CALL_KF_EVENT(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_KF_EVENT, a1, a2, a3, a4); }
	int FLD_CHECK_MORGANA_BAG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_MORGANA_BAG); }
	void FLD_PC_COVER_RUN(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_COVER_RUN, a1, a2, a3, a4); }
	void FLD_PC_SYNC_COVER_RUN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_SYNC_COVER_RUN, a1); }
	int FLD_SNUFF_GET_RESULT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SNUFF_GET_RESULT); }
	void FLD_PTY_MODEL_SET_STD_POS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_STD_POS); }
	void FLD_CAMERA_TUMBLE_INTERP(float a1, float a2, float a3, float a4, float a5, float a6, int a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_TUMBLE_INTERP, a1, a2, a3, a4, a5, a6, a7); }
	void FLD_PTY_MODEL_SET_PAUSE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_PAUSE, a1, a2); }
	void FLD_DUNGEON_RESULT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT, a1, a2); }
	void FLD_DUNGEON_RESULT_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SYNC); }
	void FLD_CROWD_SET_MESSAGE(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_SET_MESSAGE, a1, a2, a3); }
	void FLD_CAMERA_HIT_UPDATE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_HIT_UPDATE); }
	void FLD_UNIT_WAIT_DISABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_WAIT_DISABLE, a1); }
	void FLD_SFTYROOM_SET_CAMERA(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_SET_CAMERA, a1); }
	void FLD_SFTYROOM_MENU_SETHELP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_SETHELP, a1, a2); }
	void FLD_BG_TRANSKEY_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BG_TRANSKEY_SYNC); }
	void FLD_RESET_SCH_OBJ_FLAG(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RESET_SCH_OBJ_FLAG, a1, a2); }
	void FLD_PC_MODEL_ACTION(float a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_ACTION, a1, a2, a3, a4); }
	void FLD_NPC_ROTATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_ROTATE, a1, a2, a3); }
	void FLD_NPC_ROTATE_RESET(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_ROTATE_RESET, a1, a2); }
	void FLD_NPC_ROTATE_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_ROTATE_SYNC, a1); }
	void FLD_EFFECT_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EFFECT_SYNC, a1); }
	int FLD_CHOICE_REPORTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHOICE_REPORTER); }
	int FLD_PC_GET_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_GET_ID, a1); }
	void FLD_UNIT_SET_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_WAIT, a1); }
	void FLD_SET_TBOX_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_TBOX_VISIBLE, a1, a2); }
	void FLD_OVERTURN_TAG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OVERTURN_TAG, a1); }
	void FLD_SMP_EVENT_BEGIN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SMP_EVENT_BEGIN, a1); }
	void FLD_SMP_EVENT_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SMP_EVENT_END, a1); }
	void FLD_MISSION_LIST_INVISALL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_INVISALL); }
	void FLD_MISSION_LIST_VISITEM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_VISITEM, a1); }
	void FLD_MISSION_LIST_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_VISIBLE, a1); }
	void FLD_MISSION_LIST_INVIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_INVIBLE, a1, a2); }
	void FLD_MISSION_LIST_SYNC_VIS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_SYNC_VIS); }
	int FLD_GET_REPORTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_REPORTER); }
	int FLD_GET_FOUND_ENEMY_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_FOUND_ENEMY_TYPE, a1); }
	void FLD_CAMERA_SET_FIXED_REVERT(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_FIXED_REVERT, a1, a2, a3, a4, a5, a6, a7, a8); }
	void FLD_ALERT_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_VISIBLE, a1); }
	int FLD_ALERT_GET_VISIBLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_GET_VISIBLE); }
	int FLD_TUTORIAL_COVER_RUN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TUTORIAL_COVER_RUN); }
	int FLD_NPC_GET_CURRENT_PATHNODE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GET_CURRENT_PATHNODE, a1); }
	void FLD_NPC_STOP_PATHNODE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_STOP_PATHNODE, a1, a2); }
	void FLD_TOOL_CREATE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_CREATE); }
	void FLD_TOOL_CREATE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_CREATE_SYNC); }
	int FLD_PERSONA_MODEL_LOAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PERSONA_MODEL_LOAD, a1); }
	void FLD_TOOL_SCR_YESNO(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_SCR_YESNO, a1); }
	int FLD_TOOL_GET_ELEMENTID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_GET_ELEMENTID); }
	void FLD_PTY_MODEL_SET_HIDE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_HIDE, a1, a2); }
	void FLD_EXIT_TIME_DISP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EXIT_TIME_DISP); }
	void FLD_SYNC_TIME_DISP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_TIME_DISP); }
	void SAVE_TEMPORARY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SAVE_TEMPORARY); }
	int LOAD_TEMPORARY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::LOAD_TEMPORARY); }
	void FLD_NPC_SET_RUNSTATE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_RUNSTATE, a1, a2); }
	void FLD_RAIN_PAUSE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RAIN_PAUSE, a1); }
	void FLD_NPC_READRESUME_DISABLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_READRESUME_DISABLE); }
	void FLD_CROWD_INTERCEPT_READ() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_INTERCEPT_READ); }
	int FLD_TOOL_ACCOUNT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_ACCOUNT); }
	void FLD_HITSCR_FORCE_EXEC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HITSCR_FORCE_EXEC, a1, a2); }
	void FLD_ALERT_HOLD_OFF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_HOLD_OFF, a1); }
	void FLD_STOP_FLASHBACK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_STOP_FLASHBACK); }
	int FLD_MODEL_TYPMOTION_LOAD(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_TYPMOTION_LOAD, a1, a2, a3); }
	int FLD_MODEL_CLONE_TYPMOTION(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_CLONE_TYPMOTION, a1, a2, a3); }
	void FLD_UNIT_SET_WALK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_WALK, a1); }
	void FLD_UNIT_SET_RUN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_RUN, a1); }
	void FLD_UNIT_SET_C_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_C_WAIT, a1); }
	void FLD_UNIT_SET_C_RUN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_C_RUN, a1); }
	int FLD_NPC_TBLID_LOAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TBLID_LOAD, a1); }
	void FLD_ESCAPE_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ESCAPE_EFFECT); }
	float FLD_POS_GET_ROT(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_ROT, a1); }
	float FLD_POS_GET_DNG_X_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_DNG_X_POS); }
	float FLD_POS_GET_DNG_Y_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_DNG_Y_POS); }
	float FLD_POS_GET_DNG_Z_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_DNG_Z_POS); }
	float FLD_POS_GET_DNG_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_POS_GET_DNG_ROT); }
	void FLD_BGMNG_LINKPROC_TIME(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BGMNG_LINKPROC_TIME, a1, a2, a3); }
	void FLD_BGMNG_LINKPROC_ANIMSTART(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BGMNG_LINKPROC_ANIMSTART, a1, a2, a3, a4); }
	void FLD_BGMNG_LINKPROC_ANIMEND(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BGMNG_LINKPROC_ANIMEND, a1, a2, a3, a4); }
	void FLD_SWITCH_OFF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_OFF, a1); }
	int FLD_CORP_NPC_EXIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CORP_NPC_EXIST, a1); }
	int FLD_CORP_NPC_EXIST2(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CORP_NPC_EXIST2, a1, a2, a3, a4); }
	int FLD_OBJ_SEARCH_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_SEARCH_RESHND, a1, a2); }
	void FLD_SET_FOG(float a1, float a2, int a3, int a4, int a5, int a6, int a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_FOG, a1, a2, a3, a4, a5, a6, a7); }
	void FLD_SET_FOG_DEFAULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_FOG_DEFAULT, a1); }
	void FLD_SET_CORRECT(float a1, float a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CORRECT, a1, a2, a3, a4, a5, a6); }
	void FLD_SET_CORRECT_DEFAULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CORRECT_DEFAULT, a1); }
	void FLD_SYNC_ENV() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_ENV); }
	void FLD_GMC_PUZZLE_START(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_PUZZLE_START, a1, a2); }
	void FLD_GMC_PUZZLE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_PUZZLE_SYNC); }
	int FLD_GMC_PUZZLE_PARAM_CMD(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_PUZZLE_PARAM_CMD, a1, a2, a3, a4); }
	void FLD_UMBRELLA_ANIM_CHANGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UMBRELLA_ANIM_CHANGE, a1); }
	void FLD_NPC_STOP_NOW(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_STOP_NOW, a1, a2); }
	void FLD_LMAP_FADE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LMAP_FADE, a1); }
	void FLD_NPC_SET_RUNSTATE2(int a1, float a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_RUNSTATE2, a1, a2, a3); }
	void FLD_CROWD_PATH_VISIBLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_VISIBLE, a1, a2); }
	void FLD_CROWD_PATH_WAIT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_WAIT, a1, a2); }
	int FLD_CROWD_PATH_CHECK_UNIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_CHECK_UNIT, a1); }
	void FLD_CROWD_PATH_REPOP_UNIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_REPOP_UNIT, a1); }
	void FLD_CROWD_PATH_INTERCEPT_READ(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_INTERCEPT_READ, a1, a2); }
	void FLD_SET_LOCAL_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_LOCAL_COUNT, a1, a2); }
	int FLD_GET_LOCAL_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_LOCAL_COUNT, a1); }
	void FLD_SET_DOOR_HIT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DOOR_HIT, a1, a2); }
	void FLD_REPORT_MSG_DTL(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REPORT_MSG_DTL, a1, a2, a3, a4); }
	void FLD_REPORT_MSGSYNC_DTL(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REPORT_MSGSYNC_DTL, a1, a2, a3, a4); }
	void FLD_MODEL_UNIT_ROTATE(int a1, int a2, float a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_UNIT_ROTATE, a1, a2, a3, a4, a5); }
	void FLD_MODEL_UNIT_POINT_ROTATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_UNIT_POINT_ROTATE, a1, a2, a3, a4, a5); }
	void FLD_TOOL_SET_ITEM_NAME() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_SET_ITEM_NAME); }
	int FLD_TOOL_CHK_ITEM_AVAILABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_CHK_ITEM_AVAILABLE); }
	void FLD_TOOL_CREATE_ITEM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_CREATE_ITEM, a1); }
	void FLD_PC_MODEL_LOOK_AROUND(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_LOOK_AROUND, a1); }
	void FLD_DUNGEON_RESULT_SET_MES(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_MES, a1, a2, a3); }
	void FLD_DUNGEON_RESULT_CLEAR_MES() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_CLEAR_MES); }
	void FLD_DUNGEON_RESULT_SET_VAR(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_VAR, a1, a2, a3); }
	void FLD_DUNGEON_RESULT_CLEAR_VAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_CLEAR_VAR); }
	int FLD_DUNGEON_RESULT_GET_TOTALPRICE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_GET_TOTALPRICE); }
	int FLD_CROWD_PATH_WAIT_UNIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_WAIT_UNIT, a1); }
	void FLD_PC_MODEL_REQ_ACTION(float a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_REQ_ACTION, a1, a2, a3, a4); }
	void FLD_PC_MODEL_SYNC_ACTION() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SYNC_ACTION); }
	void FLD_GMC_OBJ_MOVE(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_OBJ_MOVE, a1, a2, a3, a4); }
	void FLD_GMC_OBJ_MOVE_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_OBJ_MOVE_SYNC, a1); }
	void FLD_GMC_TENKEY_START(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_TENKEY_START, a1, a2, a3); }
	int FLD_GMC_TENKEY_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_TENKEY_SYNC); }
	void FLD_GMC_TENKEY_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_TENKEY_END); }
	int FLD_GMC_TENKEY_CTRL(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_TENKEY_CTRL, a1, a2, a3, a4); }
	void FLD_SET_MOUSE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_MOUSE, a1); }
	int FLD_CHECK_MOUSE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_MOUSE); }
	int FLD_GET_PTYTALK_MSG(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PTYTALK_MSG, a1, a2, a3); }
	int FLD_GET_PTYTALK_WND(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PTYTALK_WND, a1, a2, a3); }
	int FLD_GET_PTYTALK_FACE(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PTYTALK_FACE, a1, a2, a3); }
	void FLD_CAMERA_LOCK_INTERP_S(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_LOCK_INTERP_S, a1, a2, a3, a4, a5, a6, a7, a8); }
	int FLD_GET_BATTLE_RESULT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_BATTLE_RESULT); }
	int FLD_CHECK_APPROACH_ENEMY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_APPROACH_ENEMY); }
	int FLD_CHOICE_MEMBER_REPORTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHOICE_MEMBER_REPORTER); }
	int KFEVT_GET_MAJOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_MAJOR); }
	int KFEVT_GET_MINOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_MINOR); }
	int KFEVT_GET_POS_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_POS_INDEX); }
	int KFEVT_GET_DIV_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_DIV_INDEX); }
	void FLD_REQ_PC_SE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_PC_SE, a1); }
	int FLD_NPC_EXIST_GROUP_VALUE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_EXIST_GROUP_VALUE, a1); }
	int FLD_NPC_EXIST_GROUP_VALUE_MD(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_EXIST_GROUP_VALUE_MD, a1, a2, a3); }
	int FLD_NPC_BIT_CHK_GROUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_BIT_CHK_GROUP, a1); }
	int FLD_GET_CARTALK_THEME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_THEME); }
	void KFEVT_181_INIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_INIT); }
	void KFEVT_181_INIT_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_INIT_SYNC); }
	void KFEVT_181_RESET_TAKEOUT_INFO() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_RESET_TAKEOUT_INFO); }
	void KFEVT_181_SET_TAKEOUT_INFO(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_SET_TAKEOUT_INFO, a1, a2, a3); }
	int KFEVT_181_GET_TAKEOUT_CATEGORY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_TAKEOUT_CATEGORY, a1); }
	int KFEVT_181_GET_TAKEOUT_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_TAKEOUT_ID, a1); }
	int KFEVT_181_CHECK_TAKEOUT_INFO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_CHECK_TAKEOUT_INFO, a1, a2); }
	int KFEVT_181_EVALUATION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_EVALUATION, a1); }
	int KFEVT_181_GET_BONUS_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_BONUS_TYPE); }
	int KFEVT_181_CHECK_BONUS_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_CHECK_BONUS_TYPE, a1); }
	int KFEVT_181_GET_REWARD_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_REWARD_TYPE); }
	int KFEVT_181_GET_REWARD_VALUE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_REWARD_VALUE, a1); }
	void FLD_TOOL_USE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_USE); }
	void FLD_TOOL_VIEW() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_VIEW); }
	int FLD_GET_PC_PARAM_ADD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_PC_PARAM_ADD, a1); }
	void FLD_SET_SCR_SKIP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCR_SKIP, a1); }
	int FLD_CHECK_SCR_SKIP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SCR_SKIP); }
	void FLD_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_WAIT, a1); }
	void FLD_MODEL_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ANIM, a1, a2, a3, a4, a5); }
	void FLD_MODEL_ANIM_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ANIM_SYNC, a1); }
	void FLD_PC_MODEL_SET_GLIMPSE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_GLIMPSE, a1); }
	int FLD_TOOL_GET_ITEMID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_GET_ITEMID); }
	void FLD_NPC_FBN_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_FBN_SYNC, a1); }
	int FLD_SEL_EX(int a1, int a2, int a3, int a4, int a5) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEL_EX, a1, a2, a3, a4, a5); }
	void FLD_SEL_SET_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEL_SET_VISIBLE, a1); }
	int FLD_SEL_DATA_REQUEST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEL_DATA_REQUEST, a1); }
	void FLD_MAP_PANEL_CHANGE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MAP_PANEL_CHANGE, a1, a2, a3); }
	void KFEVT_181_SET_MSG_INFO(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_SET_MSG_INFO, a1, a2, a3, a4, a5); }
	int KFEVT_181_GET_MSG_ID(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_MSG_ID, a1, a2, a3); }
	int KFEVT_181_GET_MSG_NUM(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_MSG_NUM, a1, a2, a3); }
	void FLD_PC_MODEL_LOOK_FRONT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_LOOK_FRONT); }
	void FLD_START_DEBUG_SCRIPT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_DEBUG_SCRIPT, a1, a2); }
	void FLD_MODEL_DIR_TRANSLATE(int a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_DIR_TRANSLATE, a1, a2, a3, a4); }
	void FLD_SHOW_ENEMY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SHOW_ENEMY, a1, a2); }
	int KFEVT_181_GET_BONUS_TYPE_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_BONUS_TYPE_NUM); }
	void KFEVT_181_SET_FAVORABILITY_FLAG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_SET_FAVORABILITY_FLAG, a1); }
	int KFEVT_181_GET_FAVORABILITY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_FAVORABILITY, a1); }
	int KFEVT_181_GET_BONUS_FORMATION_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_BONUS_FORMATION_COUNT, a1); }
	void KFEVT_181_RESET_MSG_INFO() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_RESET_MSG_INFO); }
	void KFEVT_181_RESET_DESIGNATION_MENU() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_RESET_DESIGNATION_MENU); }
	void KFEVT_181_SET_DESIGNATION_MENU(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_SET_DESIGNATION_MENU, a1, a2, a3); }
	int KFEVT_181_GET_RAND_DESIGNATION_MENU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_RAND_DESIGNATION_MENU, a1); }
	void FLD_LMAP_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LMAP_END, a1); }
	void FLD_MODEL_ATTACH_TRANSLATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ATTACH_TRANSLATE, a1, a2, a3); }
	void FLD_MODEL_DETACH_TRANSLATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_DETACH_TRANSLATE, a1); }
	void FLD_MODEL_ATTACH_ROTATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ATTACH_ROTATE, a1, a2, a3); }
	void FLD_MODEL_DETACH_ROTATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_DETACH_ROTATE, a1); }
	void FLD_REQ_PRE_LOAD(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_PRE_LOAD, a1, a2, a3, a4); }
	void KFEVT_181_SET_VAR_FOOD_NAME() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_SET_VAR_FOOD_NAME); }
	void FLD_MODEL_TALK_ANIM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_TALK_ANIM, a1); }
	void FLD_UNIT_SET_SURPRISE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UNIT_SET_SURPRISE, a1); }
	void FLD_GAYA_EFFECT_SET(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GAYA_EFFECT_SET, a1); }
	void FLD_MISSION_ACCEPT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_ACCEPT); }
	int FLD_LMAP_GET_FARE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LMAP_GET_FARE, a1); }
	void CALL_BATTING_CENTER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BATTING_CENTER); }
	void FLD_GREETING_MSG_DTL(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_MSG_DTL, a1, a2, a3); }
	int FLD_CROWD_PATH_READ_WAIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_READ_WAIT, a1); }
	void KFEVT_181_FOOD_VISIBLE(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_FOOD_VISIBLE, a1, a2, a3, a4); }
	void FLD_DUNGEON_RESULT_SET_EXP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_EXP, a1); }
	void FLD_HIT_ADD_ICON(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_HIT_ADD_ICON, a1, a2, a3); }
	void KFEVT_181_FOOD_ALL_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_FOOD_ALL_VISIBLE, a1); }
	void KFEVT_181_DISH_CLONE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_DISH_CLONE, a1); }
	int FLD_CHECK_SMK_BALL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SMK_BALL); }
	int FLD_CHECK_FIND_ENEMY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_FIND_ENEMY); }
	void FLD_PANEL_MAP_PROC_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MAP_PROC_SYNC, a1); }
	void FLD_PANEL_MAP_PROC_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MAP_PROC_END, a1); }
	void KFEVT_181_DISH_CLONE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_DISH_CLONE_SYNC); }
	void FLD_ROADMAP_SCALE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_SCALE, a1); }
	void FLD_TOOL_SET_DRAWFLAG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_SET_DRAWFLAG, a1); }
	void FLD_PC_MODEL_SET_FLOATING(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_FLOATING, a1); }
	void FLD_PC_MODEL_MOVE_FLOATING(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_MOVE_FLOATING, a1, a2, a3); }
	void FLD_PC_MODEL_SYNC_FLOATING() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SYNC_FLOATING); }
	void CALL_FISHING_POND() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_FISHING_POND); }
	void KFEVT_181_DISH_DRAWSET(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_DISH_DRAWSET, a1); }
	int KFEVT_181_GET_DISTANCE_X(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_DISTANCE_X, a1, a2, a3, a4, a5, a6); }
	int KFEVT_181_GET_DISTANCE_Z(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_GET_DISTANCE_Z, a1, a2, a3, a4, a5, a6); }
	int FLD_NPC_GREETING_GET_DISP_TIME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GREETING_GET_DISP_TIME); }
	void FLD_SET_DISGUISE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DISGUISE, a1); }
	int FLD_CHECK_DISGUISE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DISGUISE); }
	void FLD_PC_MODEL_PERSONAL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_PERSONAL, a1); }
	void FLD_OBJ_SET_ALPHA(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_SET_ALPHA, a1, a2, a3); }
	int FLD_PANEL_MMAP_WHOLE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MMAP_WHOLE, a1); }
	int FLD_PANEL_MAP_AT_CHECK_VISIBLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MAP_AT_CHECK_VISIBLE); }
	void KFEVT_SET_NANPA_TACTICS(float a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_SET_NANPA_TACTICS, a1, a2); }
	void FLD_SET_DEBUG_OK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DEBUG_OK); }
	int KFEVT_GET_NANPA_QUEST_VAL(float a1, float a2, float a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_NANPA_QUEST_VAL, a1, a2, a3); }
	void FLD_FASTTRAVEL_OPEN(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_FASTTRAVEL_OPEN, a1, a2, a3); }
	void FLD_MODEL_SET_RIPPLE_EFF(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_RIPPLE_EFF, a1, a2, a3); }
	void FLD_MODEL_SET_SPOUT_EFF(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_SPOUT_EFF, a1, a2); }
	void FLD_GET_FIX_ITEM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_FIX_ITEM, a1, a2); }
	int KFEVT_GET_NANPA_BEST_SEL(float a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_GET_NANPA_BEST_SEL, a1, a2); }
	int KFEVT_NANPA_BITON(float a1, float a2, float a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_NANPA_BITON, a1, a2, a3); }
	int KFEVT_NANPA_BITCHECK(float a1, float a2, float a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_NANPA_BITCHECK, a1, a2, a3); }
	void FLD_REQ_DOOR_SE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_DOOR_SE, a1, a2); }
	void KFEVT_181_DISH_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_181_DISH_EFFECT); }
	void FLD_SET_ENEMY_WAIT_TIME(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_WAIT_TIME, a1, a2, a3); }
	void FLD_OVERWRITE_ENC_NO(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OVERWRITE_ENC_NO, a1); }
	void FLD_SET_LOOK_AT_POS(int a1, float a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_LOOK_AT_POS, a1, a2, a3); }
	void FLD_PTY_MODEL_SET_RND_POS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_RND_POS); }
	void FLD_PTY_MODEL_SET_LINE_POS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_MODEL_SET_LINE_POS); }
	void FLD_OPEN_ORD_DOOR_ONLY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_ORD_DOOR_ONLY, a1); }
	int FLD_MISSION_ACCEPT_GET_CHECK_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_ACCEPT_GET_CHECK_NUM); }
	int FLD_MISSION_ACCEPT_GET_CHECK_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_ACCEPT_GET_CHECK_ID, a1); }
	int FLD_SUMMON_ENEMY_MOVE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SUMMON_ENEMY_MOVE, a1, a2); }
	void FLD_MISSION_LIST_ON_FORCE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_ON_FORCE); }
	int FLD_GET_SCH_OBJ_ENEMY(int a1, int a2, float a3, float a4, float a5) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_ENEMY, a1, a2, a3, a4, a5); }
	void FLD_TOOL_REQUEST_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_REQUEST_END); }
	int FLD_PC_GET_BAG_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_GET_BAG_TYPE); }
	void FLD_OPEN_ORD_DOOR_FADE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OPEN_ORD_DOOR_FADE, a1, a2, a3); }
	void FLD_SET_DOOR_HIT_TYPE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DOOR_HIT_TYPE, a1, a2, a3); }
	void FLD_SET_ENEMY_GLANCE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_GLANCE, a1, a2, a3); }
	void FLD_NPC_SEPARATEOFF_MESH(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SEPARATEOFF_MESH, a1); }
	void FLD_PARTY_IN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_IN, a1); }
	void FLD_PARTY_OUT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_OUT, a1); }
	void FLD_REQ_PRE_LOAD_ATDNG(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_PRE_LOAD_ATDNG, a1, a2, a3); }
	int FLD_CHECK_ENTRANCE_FLOOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_ENTRANCE_FLOOR); }
	int FLD_CHECK_SAFE_ROOM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SAFE_ROOM); }
	void FLD_SFTYROOM_MENU_SETMODE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_SETMODE, a1); }
	void FLD_MODEL_ANIM_NEXT(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ANIM_NEXT, a1, a2, a3, a4, a5); }
	int FLD_CHECK_SAVE_ENABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SAVE_ENABLE); }
	void FLD_SET_DIALY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DIALY, a1); }
	void FLD_DUNGEON_RESULT_SET_MVP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_MVP, a1); }
	void FLD_DUNGEON_RESULT_SET_BONUS(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_BONUS, a1, a2, a3); }
	void FLD_BAG_ANIM_DISABLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BAG_ANIM_DISABLE); }
	void FLD_SET_BAG_ANIM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_BAG_ANIM, a1); }
	int FLD_CHECK_DNG_TRAVERSE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DNG_TRAVERSE, a1, a2); }
	int FLD_GET_SYMBOL_ENCOUNTID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SYMBOL_ENCOUNTID, a1, a2); }
	void FLD_DUNGEON_RESULT_SET_DUNGEON_NO(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DUNGEON_RESULT_SET_DUNGEON_NO, a1); }
	int KFEVT_TBL_GET_MAJOR(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_TBL_GET_MAJOR, a1, a2, a3); }
	int KFEVT_TBL_GET_MINOR(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_TBL_GET_MINOR, a1, a2, a3); }
	int KFEVT_TBL_GET_DIV(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_TBL_GET_DIV, a1, a2, a3); }
	int FLD_MISSION_ACCEPT_GET_SELECT_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_ACCEPT_GET_SELECT_ID); }
	int FLD_GET_DNG_QUEST_NO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_DNG_QUEST_NO, a1, a2); }
	void CALL_ATDNG_QUEST_FLOOR(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ATDNG_QUEST_FLOOR, a1); }
	float FLD_GET_DNG_PARTS_ROT() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_GET_DNG_PARTS_ROT); }
	void FLD_NPC_UNDISP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_UNDISP, a1, a2); }
	int FLD_GET_ALERT_ADD_VALUE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ALERT_ADD_VALUE); }
	void FLD_BREAK_WALL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BREAK_WALL); }
	int FLD_GET_SNEAKING_ITEM_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SNEAKING_ITEM_ID); }
	void FLD_TOOL_END_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_END_EFFECT); }
	void FLD_TOOL_END_EFFECT_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_END_EFFECT_SYNC); }
	int FLD_CHECK_MSG_DISP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_MSG_DISP); }
	void KAWAKAMI_SET_REQUEST_ITEM(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KAWAKAMI_SET_REQUEST_ITEM, a1, a2, a3); }
	int KAWAKAMI_GET_REQUEST_ITEMID(float a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KAWAKAMI_GET_REQUEST_ITEMID, a1); }
	int KAWAKAMI_GET_REQUEST_ITEMNUM(float a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::KAWAKAMI_GET_REQUEST_ITEMNUM, a1); }
	void FLD_SET_RESHND_BANK(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_RESHND_BANK, a1, a2); }
	int FLD_GET_RESHND_BANK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_RESHND_BANK, a1); }
	void FLD_SFTYROOM_MENU_SETBOSSID(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SFTYROOM_MENU_SETBOSSID, a1); }
	void FLD_DASH_EFFECT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DASH_EFFECT, a1); }
	int FLD_GET_CARTALK_PC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_PC, a1); }
	int FLD_GET_CARTALK_MSG(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_MSG, a1, a2); }
	int FLD_GET_CARTALK_WND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_WND, a1, a2); }
	int FLD_GET_CARTALK_FACE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_FACE, a1, a2); }
	int FLD_GET_CARTALK_ANSWER(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_ANSWER, a1, a2); }
	int FLD_GET_CARTALK_ANS_PC(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_ANS_PC, a1, a2, a3); }
	int FLD_GET_CARTALK_ANS_MSG(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_ANS_MSG, a1, a2, a3); }
	int FLD_GET_CARTALK_ANS_WND(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_ANS_WND, a1, a2, a3); }
	int FLD_GET_CARTALK_ANS_FACE(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_CARTALK_ANS_FACE, a1, a2, a3); }
	int FLD_RESIDENT_EFFECT_START(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RESIDENT_EFFECT_START, a1); }
	int GET_CHARA_CAMERA_DIR(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_CHARA_CAMERA_DIR, a1, a2, a3, a4, a5, a6); }
	void FLD_GFS_PARTS_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GFS_PARTS_SYNC, a1); }
	void FLD_CROWD_PAUSE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PAUSE, a1); }
	void FLD_CALL_EVENT_SETUP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CALL_EVENT_SETUP); }
	void FLD_ALERT_DISP_PLACENO(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_DISP_PLACENO, a1, a2); }
	void FLD_ALERT_RAPID_DISP_PLACENO(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_RAPID_DISP_PLACENO, a1, a2); }
	void CROSSWORD_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CROSSWORD_START, a1); }
	void CROSSWORD_ENDSYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CROSSWORD_ENDSYNC); }
	int CROSSWORD_RELUST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CROSSWORD_RELUST); }
	void FLD_SET_SCR_NAME(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCR_NAME, a1, a2); }
	int FLD_MISSION_LIST_GET_FLAG(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_GET_FLAG, a1, a2); }
	void FLD_MISSION_LIST_SET_FLAG(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_SET_FLAG, a1, a2, a3); }
	void FLD_MISSION_LIST_CLEAR_FLAGS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_CLEAR_FLAGS); }
	void FLD_MISSION_LIST_SWAPTBL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_SWAPTBL); }
	void CALL_TV_PROGRAM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_TV_PROGRAM); }
	void TV_PROGRAM_ENDSYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TV_PROGRAM_ENDSYNC); }
	void TODAY_TV_PROGRAM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TODAY_TV_PROGRAM); }
	void TODAY_TV_PROGRAM_ENDSYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::TODAY_TV_PROGRAM_ENDSYNC); }
	int GET_TODAY_TV_PROGRAM_BG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_TODAY_TV_PROGRAM_BG); }
	void FLD_VLT_FILTER_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_VLT_FILTER_VISIBLE, a1); }
	void FLD_NPC_SET_EFFECT_TARGET(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_EFFECT_TARGET, a1, a2); }
	void FLD_MISSION_WINDOW(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_WINDOW, a1, a2); }
	int FLD_GET_ALERT_DEC_VALUE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_ALERT_DEC_VALUE); }
	void FLD_VLT_FILTER_LOCK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_VLT_FILTER_LOCK, a1); }
	int FLD_CHECK_DNG_FIND_PARTS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DNG_FIND_PARTS, a1); }
	void FLD_ALERT_SET_KEEP_FLAG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALERT_SET_KEEP_FLAG, a1); }
	void FLD_BG_CASH_REMOVE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BG_CASH_REMOVE); }
	int FLD_ITEM_MODEL_LOAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ITEM_MODEL_LOAD, a1, a2); }
	void FLD_PANEL_MMAP_NEW_STAGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MMAP_NEW_STAGE, a1); }
	void FLD_PANEL_MMAP_NEW_STAGE_EXIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_MMAP_NEW_STAGE_EXIT); }
	void FLD_NPC_VISIBLE_ALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_VISIBLE_ALL, a1); }
	void FLD_NPC_SET_RADIUS(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_RADIUS, a1, a2); }
	void FLD_CROWD_PATH_VISIBLE_ALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_PATH_VISIBLE_ALL, a1); }
	void FLD_START_SUPPORT_MSG_EX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_SUPPORT_MSG_EX); }
	void FLD_SHOW_NEW_SPOT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SHOW_NEW_SPOT, a1); }
	void FLD_TRANS_END_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TRANS_END_ANIM, a1, a2, a3, a4, a5); }
	void FLD_ROTATE_END_ANIM(int a1, int a2, int a3, int a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROTATE_END_ANIM, a1, a2, a3, a4, a5); }
	void FLD_END_SMK_BALL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_END_SMK_BALL); }
	int FLD_ITEM_GET_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ITEM_GET_RESHND, a1, a2); }
	void FLD_NPC_LOOKAT_DISABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_LOOKAT_DISABLE, a1, a2); }
	void FLD_SETBANK_BGENV_VOICE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SETBANK_BGENV_VOICE, a1); }
	void FLD_GET_FIX_ITEMS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_FIX_ITEMS); }
	void FLD_SLIDING_EFFECT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SLIDING_EFFECT, a1); }
	int FLD_GET_TBOX_ITEM_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TBOX_ITEM_ID, a1); }
	void FLD_GET_SCH_OBJ_BEGIN_NG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_BEGIN_NG, a1); }
	void FLD_PANEL_EXTRA_LIFE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_EXTRA_LIFE, a1, a2, a3); }
	void FLD_PANEL_EXTRA_LOOP(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_EXTRA_LOOP, a1, a2, a3); }
	void FLD_PANEL_EXTRA_END_REQ() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_EXTRA_END_REQ); }
	void FLD_PANEL_EXTRA_END_REQ_RAPID() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_EXTRA_END_REQ_RAPID); }
	int FLD_PANEL_EXTRA_CHK_VISIBLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_EXTRA_CHK_VISIBLE); }
	void FLD_NPC_APPEND_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_APPEND_LOAD); }
	void FLD_SLEEP_ENEMY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SLEEP_ENEMY, a1, a2); }
	void FLD_NPC_SET_DEFMOTION(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_DEFMOTION, a1, a2); }
	void FLD_NPC_CANCEL_ENGULF(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_CANCEL_ENGULF, a1); }
	int FLD_SEL_EX2(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEL_EX2, a1, a2, a3, a4, a5, a6, a7); }
	void FLD_ROADMAP_SET_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_SET_VISIBLE, a1); }
	void FLD_GIMMICK_RAY_HIT(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GIMMICK_RAY_HIT, a1, a2, a3); }
	void FLD_PC_CNV_NPC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_CNV_NPC); }
	void FLD_SET_EVT_EMY_ENCOUNT_NO(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_EVT_EMY_ENCOUNT_NO, a1, a2, a3); }
	void FLD_SET_ENEMY_INOUT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_INOUT, a1, a2, a3); }
	void FLD_NPC_EMOTE_ANIM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_EMOTE_ANIM, a1, a2); }
	void FLD_CAR_ONOFF_CHANGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAR_ONOFF_CHANGE, a1); }
	void FLD_PARTY_SAVE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_SAVE); }
	void FLD_PARTY_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_LOAD); }
	float FLD_GET_DNG_PARTS_X_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_GET_DNG_PARTS_X_POS); }
	float FLD_GET_DNG_PARTS_Y_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_GET_DNG_PARTS_Y_POS); }
	float FLD_GET_DNG_PARTS_Z_POS() { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_GET_DNG_PARTS_Z_POS); }
	void FLD_CAMERA_SET_TGT_UPDATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_TGT_UPDATE, a1); }
	void FLD_SHOW_NEW_SPOT_SYNC_MODE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SHOW_NEW_SPOT_SYNC_MODE, a1); }
	void FLD_SHOW_NEW_SPOT_SYNC_EXIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SHOW_NEW_SPOT_SYNC_EXIT); }
	void FLD_REVERT_ENC_NO() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REVERT_ENC_NO); }
	void FLD_SET_ALL_ENCOUNT_NO(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ALL_ENCOUNT_NO, a1, a2, a3, a4); }
	void FLD_EMY_SET_EFFECT_TARGET(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EMY_SET_EFFECT_TARGET, a1, a2); }
	void FLD_SET_SCNLIGHT_AMB(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCNLIGHT_AMB, a1, a2, a3, a4); }
	void FLD_SET_SCNLIGHT_DIFF(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCNLIGHT_DIFF, a1, a2, a3, a4); }
	void FLD_SET_SCNLIGHT_SPEC(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCNLIGHT_SPEC, a1, a2, a3, a4); }
	void FLD_SET_SCNLIGHT_DEFAULT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_SCNLIGHT_DEFAULT, a1, a2); }
	void CALL_ALERT_SPECIAL(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ALERT_SPECIAL, a1, a2); }
	int FLD_GET_TYPE_ALERT_VALUE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TYPE_ALERT_VALUE, a1); }
	void FLD_SET_TYPE_ALERT_VALUE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_TYPE_ALERT_VALUE, a1, a2); }
	int FLD_LMAP_GET_SELECT_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LMAP_GET_SELECT_ID); }
	void FLD_SET_FIX_BGM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_FIX_BGM, a1); }
	void FLD_NPC_LOOKAT_DISABLE_FBNID(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_LOOKAT_DISABLE_FBNID, a1, a2); }
	void CALL_ALERT_CHANGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ALERT_CHANGE, a1); }
	float FLD_MODEL_GET_X_WORLD_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_X_WORLD_TRANSLATE, a1); }
	float FLD_MODEL_GET_Y_WORLD_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Y_WORLD_TRANSLATE, a1); }
	float FLD_MODEL_GET_Z_WORLD_TRANSLATE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Z_WORLD_TRANSLATE, a1); }
	void FLD_MODEL_BGHELPER_TRANSLATE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_BGHELPER_TRANSLATE, a1, a2); }
	void FLD_GREETING_MSG_BLOCK(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_MSG_BLOCK, a1, a2, a3); }
	void FLD_GIMMICK_CAMERA_SET(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GIMMICK_CAMERA_SET, a1, a2); }
	int FLD_OBJ_MODEL_LOAD_UID(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_MODEL_LOAD_UID, a1, a2, a3); }
	void FLD_SWITCH_ELEVATOR(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_ELEVATOR, a1, a2); }
	float FLD_EMY_MODEL_GET_SCALE(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_EMY_MODEL_GET_SCALE, a1); }
	void FLD_NOT_OPEN_DOOR_ANIM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NOT_OPEN_DOOR_ANIM, a1); }
	void FLD_PANEL_GUIDE_HIGHLIGHT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_GUIDE_HIGHLIGHT, a1); }
	void FLD_SET_DARK_ZONE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DARK_ZONE, a1); }
	int FLD_CHECK_DARK_ZONE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_DARK_ZONE); }
	void FLD_PANEL_COIN_SET_TYPE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_COIN_SET_TYPE, a1, a2); }
	void FLD_PANEL_COIN_SET_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_COIN_SET_VISIBLE, a1); }
	int FLD_PANEL_COIN_CHECK_VISIBLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_COIN_CHECK_VISIBLE); }
	int FLD_GET_FISHING_RESULT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_FISHING_RESULT, a1, a2); }
	void PREPARE_CALL_FIELD(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PREPARE_CALL_FIELD, a1, a2, a3, a4); }
	void PREPARE_CALL_KF_EVENT(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PREPARE_CALL_KF_EVENT, a1, a2, a3, a4); }
	void FLD_CLEAR_SUMMON_ENEMY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLEAR_SUMMON_ENEMY, a1, a2); }
	void FLD_CLEAR_SUMMON_LIFE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLEAR_SUMMON_LIFE, a1, a2); }
	void FLD_CAMERA_INTERP_ASYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_INTERP_ASYNC, a1); }
	void FLD_PC_MODEL_SET_PASS_GATE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_PASS_GATE, a1, a2); }
	void FLD_BFIELD_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BFIELD_LOAD); }
	int FLD_CASINO_GAME_DEAL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CASINO_GAME_DEAL, a1, a2, a3); }
	int FLD_CASINO_GAME_CHECK_PLAY(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CASINO_GAME_CHECK_PLAY, a1, a2, a3); }
	void FLD_SET_BUTTON_HIT_DISABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_BUTTON_HIT_DISABLE, a1); }
	void FLD_ALLY_SET_POINT_ROT(float a1, float a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALLY_SET_POINT_ROT, a1, a2, a3); }
	void FLD_ALLY_SET_ORIENT_ROT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALLY_SET_ORIENT_ROT, a1); }
	void FLD_SYNC_COVER_STATE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_COVER_STATE); }
	void FLD_SET_PARTY_LOOKAT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_PARTY_LOOKAT, a1, a2); }
	void FLD_SET_PARTY_LOOKAT_POS(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_PARTY_LOOKAT_POS, a1, a2, a3, a4); }
	void FLD_RESET_PARTY_LOOKAT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_RESET_PARTY_LOOKAT, a1); }
	void FLD_ALLY_SET_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALLY_SET_WAIT, a1); }
	void FLD_PLACENAME_TEX_EXIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PLACENAME_TEX_EXIT); }
	void FLD_PLACENAME_TEX_WAIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PLACENAME_TEX_WAIT); }
	void FLD_NPC_SET_CURRENT_PATHNODE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_CURRENT_PATHNODE, a1, a2); }
	void FLD_SWITCH_REQ_ANIM(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_REQ_ANIM, a1, a2); }
	void FLD_SWITCH_SYNC_ANIM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_SYNC_ANIM); }
	int FLD_CHECK_AUTO_RECOVER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_AUTO_RECOVER); }
	int FLD_USE_AUTO_RECOVER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_USE_AUTO_RECOVER); }
	int FLD_SIMPLE_SYS_MSG(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SIMPLE_SYS_MSG, a1, a2, a3); }
	void FLD_MEMBER_RECOVER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MEMBER_RECOVER, a1); }
	void FLD_NPC_TALKICON_FORCEDISP_FBNID(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TALKICON_FORCEDISP_FBNID, a1, a2); }
	void FLD_DNG_SET_CENTER_POS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DNG_SET_CENTER_POS, a1); }
	void FLD_MODEL_SET_SCALE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_SCALE, a1, a2); }
	void FLD_CROWD_SET_DIVNO_DNG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_SET_DIVNO_DNG, a1); }
	int FLD_CROWD_GET_DIVNO_DNG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_GET_DIVNO_DNG); }
	void FLD_PTY_ADD_BUF(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_ADD_BUF, a1, a2); }
	void FLD_PTY_RESET_BUF() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_RESET_BUF); }
	void FLD_SET_DUCT_POS(float a1, float a2, float a3, float a4, float a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DUCT_POS, a1, a2, a3, a4, a5); }
	float FLD_GET_DUCT_POS(int a1) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_GET_DUCT_POS, a1); }
	void FLD_SET_CAMERA_DEFAULT_POS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CAMERA_DEFAULT_POS, a1); }
	void FLD_PANEL_GUIDE_UNDISP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_GUIDE_UNDISP, a1, a2); }
	void FLD_GEN_FISHING_SEED() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GEN_FISHING_SEED); }
	void FLD_CASINO_WORK_INIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CASINO_WORK_INIT); }
	void FLD_CLEAR_COVER_STATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLEAR_COVER_STATE, a1); }
	void FLD_SET_ENEMY_ORNAMENT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_ORNAMENT, a1, a2, a3); }
	int FLD_PANEL_GUIDE_UNDISP_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_GUIDE_UNDISP_CHECK, a1); }
	void FLD_PANEL_COIN_SET_ENABLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_COIN_SET_ENABLE, a1); }
	int FLD_PANEL_COIN_CHECK_ENABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_COIN_CHECK_ENABLE); }
	void FLD_ROADMAP_MMAP_OPEN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MMAP_OPEN, a1); }
	void FLD_ROADMAP_MMAP_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MMAP_SYNC); }
	void FLD_ROADMAP_MMAP_CLOSE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MMAP_CLOSE); }
	void FLD_SET_CAMERA_FAR_MODE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CAMERA_FAR_MODE, a1); }
	void FLD_SET_DOOR_HIT_TYPE_DTL(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DOOR_HIT_TYPE_DTL, a1, a2, a3, a4, a5); }
	void FLD_PC_OFS_TRANSLATE(float a1, float a2, float a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_OFS_TRANSLATE, a1, a2, a3, a4); }
	int FLD_FBNID_TO_NPCID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_FBNID_TO_NPCID, a1); }
	void FLD_NPC_SET_ROTATE_RATIO(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_ROTATE_RATIO, a1, a2); }
	void FLD_CAMERA_SET_FOVY(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_FOVY, a1); }
	void FLD_MODEL_DST_TRANSLATE(int a1, float a2, float a3, float a4, float a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_DST_TRANSLATE, a1, a2, a3, a4, a5, a6); }
	void FLD_CAMERA_SET_FIXED_INTERP(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_SET_FIXED_INTERP, a1, a2, a3, a4, a5, a6, a7, a8); }
	void FLD_SET_GMK_CAMERA_UID(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_GMK_CAMERA_UID, a1); }
	int FLD_GET_GMK_CAMERA_UID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_GMK_CAMERA_UID); }
	void FLD_MMT_MAP_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MMT_MAP_END); }
	void FLD_GREETING_MSG_DTL_HIGH(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GREETING_MSG_DTL_HIGH, a1, a2, a3); }
	void FLD_ROADMAP_MMAP_CHANGE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MMAP_CHANGE, a1); }
	void FLD_CAR_INTERCEPT_READ(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAR_INTERCEPT_READ, a1); }
	void FLD_NPC_TALKICON_UNDISP_FBNID(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TALKICON_UNDISP_FBNID, a1, a2); }
	void FLD_CAR_ADD_ENGINE_SE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAR_ADD_ENGINE_SE, a1); }
	void FLD_CAR_ENGINE_SE_ENABLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAR_ENGINE_SE_ENABLE, a1, a2); }
	void FLD_CRAFT_ITEM_TROPHY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CRAFT_ITEM_TROPHY, a1); }
	void FLD_ALLY_WEAPON_SETUP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ALLY_WEAPON_SETUP); }
	void FLD_SYNC_SCN_CHANGE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_SCN_CHANGE); }
	int FLD_GET_BKUP_FIELD_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_BKUP_FIELD_TYPE); }
	void FLD_OBJ_MODEL_LINKBG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_MODEL_LINKBG, a1); }
	float FLD_MODEL_GET_X_HELPER_TRANSLATE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_X_HELPER_TRANSLATE, a1, a2); }
	float FLD_MODEL_GET_Y_HELPER_TRANSLATE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Y_HELPER_TRANSLATE, a1, a2); }
	float FLD_MODEL_GET_Z_HELPER_TRANSLATE(int a1, int a2) { return ScriptingInvoke::Invoke<float>(ScriptFunctions::FLD_MODEL_GET_Z_HELPER_TRANSLATE, a1, a2); }
	void BGENV_LINK_BGOBJ_INDEX_ANIM(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BGENV_LINK_BGOBJ_INDEX_ANIM, a1, a2, a3, a4); }
	void FLD_ROADMAP_UPDATE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_UPDATE); }
	void FLD_NPC_SHADOWCAST_FBNID(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SHADOWCAST_FBNID, a1, a2); }
	void FLD_PTY_PANEL_SET_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PTY_PANEL_SET_VISIBLE, a1); }
	int CALL_PLAY_GO_SAVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PLAY_GO_SAVE); }
	void FLD_CROWD_BBEFECT_VISIBLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_BBEFECT_VISIBLE, a1); }
	void FLD_NPC_FBN_FADE_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_FBN_FADE_SYNC, a1); }
	void FLD_LMAP_SPOT_TROPHY_PROC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_LMAP_SPOT_TROPHY_PROC); }
	int AI_RND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_RND, a1); }
	void AI_ACT_ATTACK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_ATTACK); }
	int AI_TAR_RND() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_RND); }
	void AI_ACT_SKILL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_SKILL, a1); }
	void AI_DEBUG_PRINT(char* a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_DEBUG_PRINT, a1); }
	void AI_DEBUG_PRINT_VALUE(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_DEBUG_PRINT_VALUE, a1, a2); }
	int AI_CHK_FRID_VOID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRID_VOID); }
	int AI_CHK_MYHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYHP, a1); }
	int AI_CHK_MYMP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYMP, a1); }
	int AI_CHK_FRHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRHP, a1); }
	int AI_CHK_ENHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHP, a1); }
	int AI_CHK_ENHP_O(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHP_O, a1); }
	int AI_CHK_MYLV_O(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYLV_O, a1); }
	int AI_CHK_FRLV_O(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRLV_O, a1); }
	int AI_CHK_EN_LV_O(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_EN_LV_O, a1); }
	int AI_CHK_FRCNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRCNT, a1); }
	int AI_CHK_ENCNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENCNT, a1); }
	int AI_CHK_MYBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYBAD, a1); }
	int AI_CHK_FRBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRBAD, a1); }
	int AI_CHK_ENBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENBAD, a1); }
	int AI_CHK_FRID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRID, a1); }
	int AI_CHK_ENID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENID, a1); }
	int AI_CHK_FRHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRHOJO, a1); }
	int AI_CHK_ENHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHOJO, a1); }
	int AI_CHK_ESCAPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ESCAPE, a1); }
	int AI_CHK_SUMMON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_SUMMON, a1); }
	int AI_CHK_SENSEI(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_SENSEI, a1); }
	int AI_CHK_MYHANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYHANSYA, a1); }
	int AI_CHK_FRHANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRHANSYA, a1); }
	int AI_CHK_ENHANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHANSYA, a1); }
	int AI_CHK_MYKYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYKYUSYU, a1); }
	int AI_CHK_FRKYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRKYUSYU, a1); }
	int AI_CHK_ENKYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENKYUSYU, a1); }
	int AI_CHK_MYMUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYMUKOU, a1); }
	int AI_CHK_FRMUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRMUKOU, a1); }
	int AI_CHK_ENMUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENMUKOU, a1); }
	int AI_CHK_MYWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYWEAK, a1); }
	int AI_CHK_FRWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRWEAK, a1); }
	int AI_CHK_ENWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENWEAK, a1); }
	int AI_CHK_MYUSEATTR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYUSEATTR, a1); }
	int AI_CHK_FRUSEATTR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRUSEATTR, a1); }
	int AI_CHK_ENUSEATTR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENUSEATTR, a1); }
	int AI_CHK_MYUSESKIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYUSESKIL, a1); }
	int AI_CHK_FRUSESKIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRUSESKIL, a1); }
	int AI_CHK_ENUSESKIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENUSESKIL, a1); }
	int AI_CHK_MYGROUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYGROUP, a1); }
	int AI_CHK_FRGROUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRGROUP, a1); }
	int AI_CHK_ENGROUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENGROUP, a1); }
	int AI_CHK_TURN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TURN, a1); }
	int AI_CHK_TURN_O(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TURN_O, a1); }
	int AI_CHK_MYHREC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYHREC, a1); }
	int AI_CHK_MORE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MORE); }
	int AI_CHK_FRHANSYA_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRHANSYA_ST, a1); }
	int AI_CHK_ENHANSYA_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHANSYA_ST, a1); }
	int AI_CHK_FRKYUSYU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRKYUSYU_ST, a1); }
	int AI_CHK_ENKYUSYU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENKYUSYU_ST, a1); }
	int AI_CHK_FRMUKOU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRMUKOU_ST, a1); }
	int AI_CHK_ENMUKOU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENMUKOU_ST, a1); }
	int AI_CHK_FRWEAK_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRWEAK_ST, a1); }
	int AI_CHK_ENWEAK_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENWEAK_ST, a1); }
	int AI_CHK_FRIDHP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDHP, a1, a2); }
	int AI_CHK_FRIDMP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDMP, a1, a2); }
	int AI_CHK_FRIDLV_O(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDLV_O, a1, a2); }
	int AI_CHK_FRIDBAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDBAD, a1, a2); }
	int AI_CHK_FRIDBAD_ALL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDBAD_ALL, a1, a2); }
	int AI_CHK_FRIDHOJO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDHOJO, a1, a2); }
	int AI_CHK_FRIDHANSYA(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDHANSYA, a1, a2); }
	int AI_CHK_FRIDKYUSYU(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDKYUSYU, a1, a2); }
	int AI_CHK_FRIDMUKOU(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDMUKOU, a1, a2); }
	int AI_CHK_FRIDWEAK(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDWEAK, a1, a2); }
	int AI_CHK_FRIDUSEATTR(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDUSEATTR, a1, a2); }
	int AI_CHK_FRIDUSESKIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDUSESKIL, a1, a2); }
	int AI_CHK_FRIDUSEGROUP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDUSEGROUP, a1, a2); }
	int AI_CHK_FRIDHREC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDHREC, a1, a2); }
	int AI_CHK_ENIDHP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDHP, a1, a2); }
	int AI_CHK_ENIDMP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDMP, a1, a2); }
	int AI_CHK_ENIDLV_O(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDLV_O, a1, a2); }
	int AI_CHK_ENIDBAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDBAD, a1, a2); }
	int AI_CHK_ENIDBAD_ALL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDBAD_ALL, a1, a2); }
	int AI_CHK_ENIDHOJO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDHOJO, a1, a2); }
	int AI_CHK_ENIDHANSYA(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDHANSYA, a1, a2); }
	int AI_CHK_ENIDKYUSYU(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDKYUSYU, a1, a2); }
	int AI_CHK_ENIDMUKOU(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDMUKOU, a1, a2); }
	int AI_CHK_ENIDWEAK(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDWEAK, a1, a2); }
	int AI_CHK_ENIDUSEATTR(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDUSEATTR, a1, a2); }
	int AI_CHK_ENIDUSESKIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDUSESKIL, a1, a2); }
	int AI_CHK_ENIDUSEGROUP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDUSEGROUP, a1, a2); }
	int AI_CHK_ENIDHREC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDHREC, a1, a2); }
	int AI_CHK_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID, a1); }
	int AI_CHK_FRALLHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRALLHP, a1); }
	int AI_CHK_ENALLHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENALLHP, a1); }
	int AI_CHK_MYABLESKIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYABLESKIL, a1); }
	int AI_CHK_MYATTRSKIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYATTRSKIL, a1); }
	int AI_CHK_ELEMENT_HITSUB(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ELEMENT_HITSUB, a1, a2); }
	int AI_CHK_ELEMENT_HIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ELEMENT_HIT, a1); }
	int AI_CHK_ELEMENT_RESIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ELEMENT_RESIST, a1); }
	int AI_CHK_ELEMENT_NULLIFY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ELEMENT_NULLIFY, a1); }
	int AI_CHK_ANALYZE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ANALYZE, a1); }
	int AI_CHK_DOWN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_DOWN, a1); }
	int AI_CHK_SLIP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_SLIP, a1); }
	int AI_CHK_ENOVERLV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENOVERLV, a1); }
	int AI_CHK_WALL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_WALL, a1); }
	int AI_CHK_NONE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NONE, a1); }
	int AI_TAR_AI() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_AI); }
	int AI_TAR_HPMIN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HPMIN); }
	int AI_TAR_LVMIN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_LVMIN); }
	int AI_TAR_MPMAX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_MPMAX); }
	int AI_TAR_BAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_BAD, a1); }
	int AI_TAR_NOTBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTBAD, a1); }
	int AI_TAR_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_ID, a1); }
	int AI_TAR_MINE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_MINE); }
	int AI_TAR_MYAI() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_MYAI); }
	int AI_TAR_HANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HANSYA, a1); }
	int AI_TAR_KYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_KYUSYU, a1); }
	int AI_TAR_MUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_MUKOU, a1); }
	int AI_TAR_WEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_WEAK, a1); }
	int AI_TAR_NOTHANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTHANSYA, a1); }
	int AI_TAR_NOTKYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTKYUSYU, a1); }
	int AI_TAR_NOTMUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTMUKOU, a1); }
	int AI_TAR_NOTWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTWEAK, a1); }
	int AI_TAR_APPOINT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_APPOINT, a1); }
	int AI_TAR_DOWN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_DOWN, a1); }
	int AI_TAR_STAND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_STAND, a1); }
	int AI_TAR_HANSYA_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HANSYA_ST, a1); }
	int AI_TAR_KYUSYU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_KYUSYU_ST, a1); }
	int AI_TAR_MUKOU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_MUKOU_ST, a1); }
	int AI_TAR_WEAK_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_WEAK_ST, a1); }
	int AI_TAR_NOTHANSYA_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTHANSYA_ST, a1); }
	int AI_TAR_NOTKYUSYU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTKYUSYU_ST, a1); }
	int AI_TAR_NOTMUKOU_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTMUKOU_ST, a1); }
	int AI_TAR_NOTWEAK_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTWEAK_ST, a1); }
	int AI_TAR_HERO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HERO, a1); }
	int AI_TAR_NOTID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTID, a1); }
	int AI_TAR_HOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HOJO, a1); }
	int AI_TAR_NOTHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTHOJO, a1); }
	int AI_SET_AFFINITY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_AFFINITY, a1); }
	int AI_SET_DOWN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_DOWN, a1); }
	int AI_SET_SLIP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_SLIP, a1); }
	int AI_SET_DROPITEM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_DROPITEM, a1, a2); }
	int AI_GET_AFFINITY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_AFFINITY); }
	int AI_GET_FRIDTURN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRIDTURN, a1); }
	int AI_GET_ENIDTURN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENIDTURN, a1); }
	int AI_GET_FRHOJO_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRHOJO_ON, a1); }
	int AI_GET_FRHOJO_OFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRHOJO_OFF, a1); }
	int AI_GET_ENHOJO_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENHOJO_ON, a1); }
	int AI_GET_FRBAD_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRBAD_ON, a1); }
	int AI_GET_ENBAD_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENBAD_ON, a1); }
	int AI_GET_FRHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRHP, a1); }
	int AI_GET_FRLV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRLV, a1); }
	int AI_GET_ENLV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENLV, a1); }
	int AI_GET_SKILATTR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_SKILATTR, a1); }
	int AI_GET_FRCNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRCNT, a1); }
	int AI_GET_UNI(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI, a1, a2); }
	int AI_GET_UNIHPMIN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHPMIN); }
	int AI_GET_UNIWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAK, a1); }
	int AI_GET_UNIWEAK_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAK_ST, a1); }
	int AI_GET_UNIWEAK_DW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAK_DW, a1); }
	int AI_GET_UNIWEAKHPMIN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMIN, a1); }
	int AI_GET_UNIWEAKHPMIN_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMIN_ST, a1); }
	int AI_GET_UNIWEAKHPMIN_DW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMIN_DW, a1); }
	int AI_GET_UNINOMALHPMIN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOMALHPMIN, a1); }
	int AI_GET_UNINOMALHPMIN_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOMALHPMIN_ST, a1); }
	int AI_GET_UNINOMALHPMIN_DW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOMALHPMIN_DW, a1); }
	int AI_GET_UNIBESTATTRSKIL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIBESTATTRSKIL, a1, a2, a3); }
	int AI_GET_UNIBESTATTRITEM(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIBESTATTRITEM, a1, a2, a3); }
	int AI_GET_UNIBESTATKSKIL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIBESTATKSKIL, a1, a2, a3); }
	int AI_GET_UNIAPPOINT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIAPPOINT, a1); }
	int AI_GET_UNIWEAKATTRSKIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKATTRSKIL, a1, a2); }
	int AI_GET_UNIHERO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHERO, a1); }
	int AI_GET_UNIATAB(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIATAB, a1); }
	int AI_GET_UNIATAB_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIATAB_ST, a1); }
	int AI_GET_UNIATAB_DW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIATAB_DW, a1); }
	int AI_GET_UNICND_FR(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNICND_FR, a1, a2, a3); }
	int AI_GET_UNIHOJO_OFF_FR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO_OFF_FR, a1); }
	int AI_GET_UNIHOJO_OFF_EN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO_OFF_EN, a1); }
	int AI_GET_UNILVMAX_EN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNILVMAX_EN, a1); }
	int AI_GET_UNINOMALLVMAXHPMAX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOMALLVMAXHPMAX, a1); }
	int AI_GET_UNINOMALNOTBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOMALNOTBAD, a1); }
	int AI_GET_UNINOTNOMAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOTNOMAL, a1); }
	int AI_GET_MY_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_MY_ID); }
	int AI_GET_P_MAX_HP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_MAX_HP, a1); }
	int AI_GET_P_NOW_HP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_NOW_HP, a1); }
	int AI_GET_NEXT_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_NEXT_ID, a1); }
	int AI_GET_P_ORDER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_ORDER, a1); }
	int AI_GET_P_MAX_SP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_MAX_SP, a1); }
	int AI_GET_P_NOW_SP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_NOW_SP, a1); }
	int AI_GET_UNIHOJO_ON_EN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO_ON_EN, a1); }
	int AI_GET_UNIHANSYA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHANSYA, a1); }
	int AI_GET_UNIKYUSYU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIKYUSYU, a1); }
	int AI_GET_UNIMUKOU(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIMUKOU, a1); }
	int AI_GET_UNIRESIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIRESIST, a1); }
	int AI_GET_UNIWEAKHPMAX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMAX, a1); }
	int AI_GET_UNIWEAKHPMAX_ST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMAX_ST, a1); }
	int AI_GET_UNIWEAKHPMAX_DW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIWEAKHPMAX_DW, a1); }
	int AI_GET_UNIBADHPMAX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIBADHPMAX, a1); }
	int AI_GET_UNIBADHPMIN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIBADHPMIN, a1); }
	int AI_GET_UNIRANDOM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIRANDOM, a1); }
	int AI_DEB_PRI_TARUNI_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_DEB_PRI_TARUNI_ID); }
	int AI_CHK_ISENEMY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ISENEMY); }
	int AI_SET_BADSTATUS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_BADSTATUS, a1); }
	int AI_CHG_CAMERA_FIX(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHG_CAMERA_FIX, a1, a2, a3, a4, a5, a6); }
	int AI_SET_CAMERA_ANM_S(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ANM_S, a1, a2, a3, a4, a5, a6); }
	int AI_SET_CAMERA_ANM_E(float a1, float a2, float a3, float a4, float a5, float a6) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ANM_E, a1, a2, a3, a4, a5, a6); }
	int AI_SET_CAMERA_ANM_TIME(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ANM_TIME, a1); }
	int AI_CHG_CAMERA_ANM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHG_CAMERA_ANM, a1); }
	int AI_SET_CAMERA_ANM_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ANM_TYPE, a1); }
	void CALL_BATTLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BATTLE, a1); }
	void WAIT_BATTLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::WAIT_BATTLE); }
	void BTL_FADE_IN() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_FADE_IN); }
	void BTL_FADE_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_FADE_SYNC); }
	int BTL_CUTSCENE_LOAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_LOAD, a1, a2); }
	void BTL_CUTSCENE_LOADSYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_LOADSYNC, a1); }
	void BTL_CUTSCENE_PLAY(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_PLAY, a1, a2, a3, a4, a5); }
	void BTL_CUTSCENE_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_SYNC, a1); }
	void BTL_CUTSCENE_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_END, a1); }
	void AI_ACT_WAIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_WAIT); }
	int AI_CHK_PLAYER_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_PLAYER_ID, a1); }
	int AI_CHK_MYID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYID, a1, a2); }
	int AI_GET_MYATTRATTACK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_MYATTRATTACK); }
	int AI_GET_E_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_E_NUM, a1); }
	int AI_GET_UNI_NOANALYZE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_NOANALYZE, a1); }
	int AI_CHK_UNIHOJO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIHOJO, a1, a2); }
	int AI_CHK_ENRESIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENRESIST, a1); }
	int AI_GET_ATTRSKIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ATTRSKIL, a1, a2); }
	int AI_CHK_BOSS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_BOSS, a1); }
	int AI_CHK_UNIATTACK(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIATTACK, a1, a2); }
	int AI_ACT_UNIBESTATKSKIL_ALL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_UNIBESTATKSKIL_ALL, a1); }
	int AI_CHK_UNIRESIST(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIRESIST, a1, a2); }
	int AI_CHK_UNIBAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIBAD, a1, a2); }
	int AI_CHK_UNINOMAL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNINOMAL, a1, a2); }
	int AI_CHK_P_ABLE_SKILL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_P_ABLE_SKILL, a1, a2); }
	int AI_GET_ENBADOFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENBADOFF, a1); }
	int AI_GET_UNINOBADOFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNINOBADOFF, a1); }
	int AI_CHK_UNIHP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIHP, a1, a2); }
	int AI_CHK_FRIDABLESKIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDABLESKIL, a1, a2); }
	int AI_CHK_MYRESIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYRESIST, a1); }
	int AI_CHK_MYHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYHOJO, a1); }
	int AI_GET_FIRST_ACTION() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FIRST_ACTION); }
	int AI_GET_GLOBAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_GLOBAL, a1); }
	int AI_GET_P_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_P_NUM, a1); }
	void AI_SET_ASSISTSKILL_MODE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_ASSISTSKILL_MODE, a1); }
	int AI_CHK_FRALLSP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRALLSP, a1); }
	int AI_SET_GLOBAL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_GLOBAL, a1, a2); }
	int AI_SET_CAMERA_END(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_END, a1); }
	int AI_GET_UNI_TALKCHARA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_TALKCHARA); }
	int AI_CHK_ID_PSTOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID_PSTOCK, a1); }
	void AI_SET_TALKRESULT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKRESULT, a1); }
	void AI_SET_CAMERA_FOV_S(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_FOV_S, a1); }
	void AI_SET_CAMERA_ROTANM_S(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ROTANM_S, a1); }
	void AI_SET_CAMERA_ROTANM_E(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_ROTANM_E, a1); }
	void AI_SET_CAMERA_RESET() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_RESET); }
	void AI_SET_CAMERA_FOV_E(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_FOV_E, a1); }
	int AI_GET_ID_TALKCHARA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALKCHARA); }
	int AI_GET_IDLV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_IDLV, a1); }
	void AI_SET_CAMERA_SHAKE_S(int a1, float a2, float a3, float a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_SHAKE_S, a1, a2, a3, a4); }
	void AI_SET_CAMERA_SHAKE_E(float a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_CAMERA_SHAKE_E, a1); }
	int AI_CHK_PBOOK_REGIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_PBOOK_REGIST, a1); }
	int AI_GET_ID_TALK_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_TYPE, a1); }
	int AI_GET_ID_TALK_PERSON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_PERSON, a1); }
	int AI_GET_ID_TALK_MONEYMIN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_MONEYMIN, a1); }
	int AI_GET_ID_TALK_MONEYMAX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_MONEYMAX, a1); }
	int AI_GET_ID_TALK_ITEM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_ITEM, a1, a2); }
	int AI_GET_ID_TALK_ITEM_RARE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ID_TALK_ITEM_RARE, a1, a2); }
	void AI_SET_TALK_SPEAKER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALK_SPEAKER, a1); }
	void AI_SET_ADD_FACEANIM(int a1, int a2, float a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_ADD_FACEANIM, a1, a2, a3); }
	int AI_SET_GLOBAL_EVENT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_GLOBAL_EVENT, a1, a2); }
	int AI_GET_GLOBAL_EVENT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_GLOBAL_EVENT, a1); }
	int BTL_CUTSCENE_LOAD_TALK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_LOAD_TALK, a1); }
	int AI_SET_LOCAL_PARAM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_LOCAL_PARAM, a1, a2); }
	int AI_GET_LOCAL_PARAM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_LOCAL_PARAM, a1); }
	void BTL_CUTSCENE_CANCEL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_CANCEL, a1); }
	void AI_ACT_WAIT3(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_WAIT3, a1); }
	void BTL_CUTSCENE_REMOVE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_REMOVE, a1); }
	void BTL_RELOCATION() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_RELOCATION); }
	int AI_CHK_ID_FRTARGET(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID_FRTARGET, a1); }
	int AI_TAR_UID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_UID, a1); }
	int AI_SET_ENIDAFFINITY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_ENIDAFFINITY, a1, a2); }
	int AI_GET_ENIDAFFINITY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENIDAFFINITY, a1); }
	int AI_CHK_ABLEWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ABLEWEAK, a1); }
	int AI_ACT_TAKEOVER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_TAKEOVER, a1); }
	int AI_CHK_TAKEOVER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TAKEOVER, a1); }
	int AI_SET_ENID_MAXSERIAL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_ENID_MAXSERIAL, a1, a2); }
	int AI_GET_ENID_MAXSERIAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENID_MAXSERIAL, a1); }
	int AI_GET_ENID_CURRENTSERIAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENID_CURRENTSERIAL, a1); }
	void AI_SET_TALKCUTSCENE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKCUTSCENE_PLAY, a1); }
	void AI_SET_TALKMESS_SCENE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_SCENE, a1); }
	void AI_SET_TALKMESS_WAIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_WAIT); }
	void AI_SET_TALKMESS_PARAM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_PARAM); }
	void AI_SET_TALKMESS_EN_PARAM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_EN_PARAM); }
	void AI_SET_TALKMESS_STATE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_STATE, a1); }
	void CALL_EVENTBATTLE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_EVENTBATTLE, a1, a2, a3); }
	void AI_SET_TALKMESS_OBTAIN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_OBTAIN, a1); }
	int AI_CHK_TALKMESS_INFODATA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TALKMESS_INFODATA); }
	void AI_SET_TALKMESS_MASK(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_MASK, a1); }
	void AI_SET_TALKMESS_DOUBLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_DOUBLE); }
	int AI_CHK_TALKMESS_CRITICAL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TALKMESS_CRITICAL); }
	int AI_CHK_TALKMESS_SURRENDER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TALKMESS_SURRENDER); }
	void AI_SET_TALKMESS_COOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALKMESS_COOP, a1); }
	void BTL_CUTSCENE_CAPTURE_ENDFRAME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_CAPTURE_ENDFRAME, a1); }
	int AI_CHK_UNIANALYZE_OPEN(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIANALYZE_OPEN, a1, a2); }
	int AI_CHK_GUN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_GUN); }
	void AI_ACT_GUN() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_GUN); }
	int AI_ACT_HIGHSKILL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_HIGHSKILL, a1); }
	int AI_ACT_REZ() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_REZ); }
	int AI_ACT_BADSTATE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_BADSTATE); }
	int AI_ACT_BOSS_PRESIDENT_SUMMON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_BOSS_PRESIDENT_SUMMON); }
	int AI_CHK_TURN_EQUAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TURN_EQUAL, a1); }
	int AI_CHK_TURN_DIVI(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_TURN_DIVI, a1); }
	int AI_CHK_NOTMYBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTMYBAD, a1); }
	int AI_CHK_NOTFRBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTFRBAD, a1); }
	int AI_CHK_NOTENBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTENBAD, a1); }
	int AI_CHK_NOTMYHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTMYHOJO, a1); }
	int AI_CHK_NOTFRHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTFRHOJO, a1); }
	int AI_CHK_NOTENHOJO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTENHOJO, a1); }
	int AI_CHK_PREV_ATK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_PREV_ATK); }
	int AI_CHK_PREV_WAIT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_PREV_WAIT); }
	void BTL_SYSTEM_MESS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_SYSTEM_MESS, a1); }
	int AI_CHK_EXTENDEDWAIT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_EXTENDEDWAIT); }
	int AI_CHK_ENEMY_ABLEWEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENEMY_ABLEWEAK, a1); }
	int AI_ACT_ENTAKEOVER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_ENTAKEOVER, a1); }
	int BTL_ROULETTE_BET() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ROULETTE_BET); }
	int AI_GET_UIDTOID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UIDTOID, a1); }
	int AI_GET_ENHP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENHP, a1); }
	int AI_CHK_ENALLDOWN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENALLDOWN); }
	int AI_GET_BOSSDAMAGE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_BOSSDAMAGE); }
	void AI_CLEAR_BOSSDAMAGE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CLEAR_BOSSDAMAGE); }
	int AI_GET_ACTUID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ACTUID); }
	void AI_SET_VOICE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_VOICE, a1); }
	int AI_GET_UNI_DARK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_DARK, a1); }
	void BTL_ADD_SERIES(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ADD_SERIES, a1); }
	int BTL_GET_SERIES() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_SERIES); }
	int AI_CHK_ID_TALK_FLAG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID_TALK_FLAG, a1); }
	void AI_SET_TALK_ITEM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALK_ITEM, a1); }
	void AI_SET_TALK_ITEM_RARE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_TALK_ITEM_RARE, a1); }
	int AI_ACT_DEBUFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_DEBUFF, a1); }
	int AI_ACT_UNKNOWN_ATTR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_UNKNOWN_ATTR, a1); }
	int AI_GET_TALK_MAJOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_TALK_MAJOR); }
	int AI_CHK_EXCEPTION() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_EXCEPTION); }
	void BTL_REQ_ASSIST(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_REQ_ASSIST, a1, a2); }
	void BTL_CLS_ASSIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CLS_ASSIST); }
	int AI_CHK_ROUNDUP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ROUNDUP); }
	void AI_SET_MSGVAR(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_MSGVAR, a1); }
	int AI_GET_UNIHPMIN_EN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHPMIN_EN); }
	void AI_ACT_ESCAPE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_ESCAPE); }
	int BTL_CHK_ENCOUNTFLAG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CHK_ENCOUNTFLAG, a1); }
	int AI_GET_UNI_SKIMMING(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_SKIMMING, a1); }
	int AI_GET_UNI_TALKCONTACT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_TALKCONTACT, a1); }
	int AI_SET_FRID_MAXSERIAL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_FRID_MAXSERIAL, a1, a2); }
	int AI_GET_FRID_MAXSERIAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRID_MAXSERIAL, a1); }
	void AI_ACT_DEFENSE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_DEFENSE); }
	int AI_ACT_FIXED() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_FIXED); }
	int AI_ACT_HEAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_HEAL, a1); }
	void BTL_TALK_ADDWANTED(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_ADDWANTED, a1); }
	int BTL_TALK_PERSONAGET_LOADREQ() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_PERSONAGET_LOADREQ); }
	int BTL_TALK_PERSONAGET_LOADWAIT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_PERSONAGET_LOADWAIT); }
	int AI_ACT_GUARDORDER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_GUARDORDER); }
	int AI_SET_GUARDORDER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_SET_GUARDORDER, a1); }
	int AI_GET_UNI_ATTACK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNI_ATTACK); }
	int BTL_CHK_DUNGEONMATCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CHK_DUNGEONMATCH); }
	int BTL_SET_STARTDUNGEONMATCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_SET_STARTDUNGEONMATCH); }
	int BTL_WAIT_DUNGEONMATCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_WAIT_DUNGEONMATCH); }
	void AI_ENID_SUSPEND(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ENID_SUSPEND, a1); }
	void AI_ENID_RESUME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ENID_RESUME, a1); }
	int AI_CHK_EXCEPT_ENCOUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_EXCEPT_ENCOUNT, a1); }
	void AI_FRID_SUSPEND(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_FRID_SUSPEND, a1); }
	void AI_FRID_RESUME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_FRID_RESUME, a1); }
	int BTL_TALK_WEATHER_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_WEATHER_ITEM, a1); }
	int BTL_TALK_CHECK_NO_YOU() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_CHECK_NO_YOU); }
	int BTL_TALK_NO_YOU() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_NO_YOU); }
	void PREPARE_FIELDBATTLE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::PREPARE_FIELDBATTLE, a1); }
	void CALL_FIELDBATTLE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_FIELDBATTLE); }
	int BTL_TALK_ICON_PLAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_ICON_PLAY, a1); }
	void BTL_SET_MSG_SPEAKER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_SET_MSG_SPEAKER, a1); }
	int BTL_TALK_GET_SELECTNO() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_GET_SELECTNO); }
	void BTL_BOSSSE_PLAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_BOSSSE_PLAY, a1); }
	int BTL_TALK_SET_RESETCAMERA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_SET_RESETCAMERA); }
	int BTL_TALK_SET_ASSIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_SET_ASSIST, a1); }
	void BTL_CUTSCENE_BOSS999_PLAY(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTSCENE_BOSS999_PLAY, a1, a2, a3, a4, a5); }
	int BTL_TALK_GET_YOSHIDACOOP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_GET_YOSHIDACOOP); }
	int BTL_TALK_CHK_USONAKI() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_CHK_USONAKI); }
	void BTL_MISSION_ADD(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_MISSION_ADD, a1); }
	void BTL_MISSION_REMOVE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_MISSION_REMOVE, a1); }
	void BTL_LETTERBOX_IN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_LETTERBOX_IN, a1); }
	void BTL_LETTERBOX_OUT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_LETTERBOX_OUT, a1); }
	int BTL_CHK_NOTPHYSICAL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CHK_NOTPHYSICAL); }
	void BTL_ROULETTE_BET_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ROULETTE_BET_LOAD); }
	void AI_ACT_DANGERUP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_DANGERUP); }
	void BTL_SYNC_ASSIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_SYNC_ASSIST); }
	int AI_ACT_TECHNICAL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_TECHNICAL); }
	int AI_TAR_HPMAX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HPMAX); }
	int AI_CHK_FMTPINCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FMTPINCH); }
	int AI_CHK_ID_ENTARGET(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID_ENTARGET, a1); }
	int AI_GET_UID_IDBAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UID_IDBAD, a1, a2); }
	int AI_GET_UID_IDSUPPORT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UID_IDSUPPORT, a1, a2); }
	int AI_GET_UID_IDNOTBAD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UID_IDNOTBAD, a1, a2); }
	int AI_GET_UID_IDNOTSUPPORT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UID_IDNOTSUPPORT, a1, a2); }
	int BTL_CUTIN_CREATE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_CREATE, a1); }
	int BTL_CUTIN_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_SYNC); }
	int BTL_CUTIN_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_START); }
	int BTL_CUTIN_START_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_START_SYNC); }
	int BTL_CUTIN_END_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_END_SYNC); }
	int BTL_CUTIN_DELETE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_CUTIN_DELETE); }
	int BTL_TALK_EXIST_BLANK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_EXIST_BLANK); }
	int AI_GET_ENTALK_ITEM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENTALK_ITEM); }
	int AI_GET_ENTALK_MONEY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENTALK_MONEY); }
	void BTL_TALK_ALLY_SPEAKER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_ALLY_SPEAKER, a1); }
	void AI_ADD_REINFORCEMENT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ADD_REINFORCEMENT, a1); }
	void BTL_TALK_REQ_JYOKYO(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_REQ_JYOKYO, a1); }
	void BTL_TALK_REQ_SKILLNAME(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_TALK_REQ_SKILLNAME, a1); }
	int AI_ACT_ATTACK_WEAK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_ATTACK_WEAK, a1); }
	int AI_CHK_DEATHMARCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_DEATHMARCH); }
	void CALL_EVENT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_EVENT, a1, a2); }
	void EVT_ASSET_OVERWRITE(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_ASSET_OVERWRITE, a1, a2, a3, a4, a5, a6, a7, a8); }
	int EVT_GET_RESHND(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_RESHND, a1, a2); }
	int EVT_GET_ASSET_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ASSET_RESHND, a1); }
	void CHARA_CAMERA(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHARA_CAMERA, a1, a2, a3, a4); }
	int EVT_GET_ANIMCOUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ANIMCOUNT, a1); }
	int EVT_GET_ANIMCOUNT_U() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ANIMCOUNT_U); }
	int EVT_GET_ANIMCOUNT_D() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ANIMCOUNT_D); }
	int EVT_GET_ANIMCOUNT_L() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ANIMCOUNT_L); }
	int EVT_GET_ANIMCOUNT_R() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_ANIMCOUNT_R); }
	void CUTIN_START(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CUTIN_START, a1, a2, a3, a4); }
	void CUTIN_STOP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CUTIN_STOP, a1); }
	void CMM_OPEN(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_OPEN, a1); }
	int CMM_EXIST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_EXIST, a1); }
	int CMM_GET_LV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_LV, a1); }
	void CMM_LVUP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_LVUP, a1); }
	int CMM_CHK_LVUP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_LVUP, a1); }
	void CMM_ADD_POINT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ADD_POINT, a1, a2); }
	void CMM_ADD_POINT_ID(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ADD_POINT_ID, a1, a2, a3); }
	int CMM_CHK_REVERSE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_REVERSE, a1); }
	void CMM_SET_REVERSE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_REVERSE, a1, a2); }
	int CMM_CHK_BROKEN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_BROKEN, a1); }
	void CMM_SET_BROKEN(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_BROKEN, a1, a2); }
	int CMM_CHK_CALL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_CALL, a1); }
	void CMM_SET_PROMISE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_PROMISE, a1); }
	int CMM_GET_PROMISE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_PROMISE); }
	int CMM_CHK_PROMISE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_PROMISE); }
	int CMM_GET_PROMISE_DAY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_PROMISE_DAY); }
	void CMM_SETUP_EVENT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SETUP_EVENT, a1, a2); }
	void CMM_EXEC_EVENT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_EXEC_EVENT); }
	int CMM_GET_EVENT_TYPE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_EVENT_TYPE); }
	void CMM_VSET_COMMUNITY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_VSET_COMMUNITY, a1); }
	int CMM_VSET_PS(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_VSET_PS, a1, a2); }
	int CMM_VSET_PSID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_VSET_PSID, a1); }
	void CMM_FRIEND(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_FRIEND, a1); }
	int CMM_CHK_EVENT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_EVENT, a1, a2); }
	void CMM_ACTIVE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ACTIVE, a1); }
	int CMM_GET_LOVER_HIGH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_LOVER_HIGH); }
	int CMM_CHK_ARCANA_PSSTOCKLV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_ARCANA_PSSTOCKLV, a1); }
	int CMM_CHK_INVITE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_INVITE); }
	int CMM_CHK_FIX_INVITE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_FIX_INVITE); }
	void CMM_SET_INVITE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_INVITE, a1); }
	int CMM_CNV_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CNV_ID, a1); }
	int CMM_GET_CLUB(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_CLUB, a1); }
	void CMM_ARBEIT_PAY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ARBEIT_PAY, a1); }
	int CMM_ARBEIT_PAY_RECEIVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ARBEIT_PAY_RECEIVE); }
	int CMM_ARBEIT_GET_MONEY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ARBEIT_GET_MONEY, a1); }
	void CMM_RANKUP(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_RANKUP, a1, a2, a3); }
	void CMM_EVERY_DAY_UPDATE_SUDDEN_DEATH() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_EVERY_DAY_UPDATE_SUDDEN_DEATH); }
	void CMM_INC_SUDDEN_DEATH_COUNT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_INC_SUDDEN_DEATH_COUNT, a1); }
	int CMM_CHK_SUDDEN_DEATH_DOUBT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_SUDDEN_DEATH_DOUBT, a1); }
	int CMM_CHK_SUDDEN_DEATH(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_SUDDEN_DEATH, a1); }
	void CMM_SET_SUDDEN_DEATH_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_SUDDEN_DEATH_COUNT, a1, a2); }
	void CMM_DEC_SUDDEN_DEATH_COUNT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DEC_SUDDEN_DEATH_COUNT, a1); }
	void CMM_SET_SUDDEN_DEATH_FLAGT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_SUDDEN_DEATH_FLAGT, a1); }
	void CMM_RESET_SUDDEN_DEATH_FLAG(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_RESET_SUDDEN_DEATH_FLAG, a1); }
	void CMM_GET_PERSONA_DAY_TIME_SKILL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_PERSONA_DAY_TIME_SKILL, a1); }
	int CMM_MO_GET_INDEX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_GET_INDEX); }
	int CMM_MO_CHK_DAY() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_CHK_DAY); }
	int CMM_MO_CHK_DAY_RECEIVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_CHK_DAY_RECEIVE); }
	int CMM_MO_GET_MONEY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_GET_MONEY, a1, a2); }
	int CMM_MO_SET_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_SET_ITEM, a1); }
	void CMM_MO_VSET(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MO_VSET, a1); }
	void CMM_DEC2_SUDDEN_DEATH_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DEC2_SUDDEN_DEATH_COUNT, a1, a2); }
	void CMM_START_AUTO_COMMAND() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_START_AUTO_COMMAND); }
	int CMM_SYNC_AUTO_COMMAND() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SYNC_AUTO_COMMAND); }
	void CMM_NEWS_PAPER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_NEWS_PAPER); }
	void CMM_NEWS_PAPER_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_NEWS_PAPER_SYNC); }
	void MISSION_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_START, a1); }
	void MISSION_START_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_START_SYNC, a1); }
	void MISSION_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_END, a1); }
	void MISSION_SCRIPT_EXEC(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_SCRIPT_EXEC, a1, a2); }
	void LBX_IN_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LBX_IN_START, a1); }
	void LBX_IN_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LBX_IN_SYNC); }
	void LBX_OUT_START(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::LBX_OUT_START, a1); }
	void LBX_OUT_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::LBX_OUT_SYNC); }
	void CUTIN_START2(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CUTIN_START2, a1, a2, a3, a4, a5); }
	void CUTIN_START3(int a1, int a2, int a3, int a4, int a5, int a6) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CUTIN_START3, a1, a2, a3, a4, a5, a6); }
	void CUTIN_START4(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CUTIN_START4, a1, a2, a3, a4, a5, a6, a7); }
	void CALL_EVENT_TEST(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_EVENT_TEST, a1, a2); }
	void EVT_MONOTONE_START() { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MONOTONE_START); }
	void EVT_MONOTONE_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MONOTONE_END); }
	void EVT_MODEL_ADD_ROTATE(int a1, float a2, float a3, float a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MODEL_ADD_ROTATE, a1, a2, a3, a4, a5); }
	void CALL_EVENT_PREPARE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_EVENT_PREPARE, a1, a2, a3); }
	void CHAT_WAIT_PAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_WAIT_PAD); }
	void CHAT_SEL_LINE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SEL_LINE, a1, a2); }
	void CHAT_SET_SEL(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SET_SEL, a1, a2, a3); }
	int CHAT_GET_SEL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_SEL, a1, a2); }
	void CALL_BOOK_READ(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BOOK_READ, a1); }
	int CMM_BOOK_READ(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_BOOK_READ, a1, a2); }
	int CMM_BOOK_SEARCH(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_BOOK_SEARCH, a1, a2, a3); }
	int CMM_BOOK_ACCESS(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_BOOK_ACCESS, a1, a2); }
	int CMM_BOOK_READ_END(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_BOOK_READ_END, a1); }
	int CHAT_CHECK_READ(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_CHECK_READ, a1); }
	void CHAT_SET_READ(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SET_READ, a1, a2); }
	int CMM_BOOK_SIZE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_BOOK_SIZE, a1); }
	int CMM_RAPID_BUTTON_ACTION(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_RAPID_BUTTON_ACTION, a1, a2, a3); }
	int CMM_DAICE_BUTTON_ACTION(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DAICE_BUTTON_ACTION, a1, a2, a3, a4); }
	int CMM_GOLF_BUTTON_ACTION(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GOLF_BUTTON_ACTION, a1, a2, a3); }
	void CMM_SET_INVITE_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_INVITE_COUNT, a1, a2); }
	int CMM_GET_INVITE_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_INVITE_COUNT, a1); }
	void CMM_COUNTUP_REVERSE_DAY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_COUNTUP_REVERSE_DAY); }
	int CMM_GET_REVERSE_DAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_REVERSE_DAY, a1); }
	void CMM_START_REVERSE_RENDITION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_START_REVERSE_RENDITION, a1); }
	void CMM_START_CANCEL_REVERSE_RENDITION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_START_CANCEL_REVERSE_RENDITION, a1); }
	void CMM_START_BROKEN_RENDITION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_START_BROKEN_RENDITION, a1); }
	void CMM_FUNC_LIST_DRAW_START(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_FUNC_LIST_DRAW_START, a1, a2, a3); }
	void CMM_FUNC_LIST_DRAW_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_FUNC_LIST_DRAW_END); }
	int CMM_CHECK_NOW_ACTIVE(float a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHECK_NOW_ACTIVE, a1); }
	int CMM_FLAG_CONVERT(float a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_FLAG_CONVERT, a1, a2); }
	void CMM_AREA_NAME_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_AREA_NAME_DISP, a1); }
	void CMM_TIMEWARP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_TIMEWARP); }
	int CMM_CHECK_ENABLE_FUNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHECK_ENABLE_FUNC, a1); }
	void EVT_SET_LOCAL_COUNT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_LOCAL_COUNT, a1, a2); }
	int EVT_GET_LOCAL_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_LOCAL_COUNT, a1); }
	int CHAT_CHECK_ARRIVAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_CHECK_ARRIVAL, a1); }
	int CHAT_GET_ARRIVAL_TIME(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_ARRIVAL_TIME, a1); }
	int CHAT_CHECK_PASS_TIME_ARRIVAL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_CHECK_PASS_TIME_ARRIVAL, a1); }
	void CALL_STAFF_ROLL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_STAFF_ROLL); }
	void EVT_SET_LOCAL_DATA(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_LOCAL_DATA, a1, a2); }
	int EVT_GET_LOCAL_DATA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_LOCAL_DATA, a1); }
	int CMM_RAPID_BUTTON_ACTION2(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_RAPID_BUTTON_ACTION2, a1, a2, a3); }
	int CMM_DAICE_BUTTON_ACTION2(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DAICE_BUTTON_ACTION2, a1, a2); }
	int CMM_DAICE_BUTTON_GET_DAICE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DAICE_BUTTON_GET_DAICE, a1); }
	int CMM_GOLF_BUTTON_ACTION2(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GOLF_BUTTON_ACTION2, a1, a2, a3, a4); }
	int CMM_COMMAND_BUTTON_ACTION2(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_COMMAND_BUTTON_ACTION2, a1, a2, a3); }
	void CMM_INTERROGATION_IN() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_INTERROGATION_IN); }
	void CMM_SET_LV(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SET_LV, a1, a2); }
	void INIT_IME_DRIVER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::INIT_IME_DRIVER); }
	void END_IME_DRIVER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::END_IME_DRIVER); }
	void EVT_SE_PLAY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SE_PLAY, a1, a2); }
	void EVT_SE_STOP(int a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SE_STOP, a1, a2); }
	void KFEVT_EPL_READ(float a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_EPL_READ, a1, a2); }
	void KFEVT_EPL_READ_SYNC() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_EPL_READ_SYNC); }
	void KFEVT_EPL_FREE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_EPL_FREE); }
	void KFEVT_EPL_PLAY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::KFEVT_EPL_PLAY); }
	int GET_CHAT_INVITE_TIMING(float a1, float a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_CHAT_INVITE_TIMING, a1, a2); }
	void MDL_ANIM_LINK_EVTSE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_LINK_EVTSE, a1, a2, a3); }
	void INVITE_WORK_INIT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::INVITE_WORK_INIT); }
	void SET_INVITE_WORK(float a1, float a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_INVITE_WORK, a1, a2); }
	int GET_INVITE_WORK(float a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_INVITE_WORK, a1); }
	int GET_INVITE_CORP_MAX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_INVITE_CORP_MAX); }
	void EVT_SET_LOG_DISP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_LOG_DISP, a1); }
	int CMM_CHECK_ENABLE_FUNC_DETAIL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHECK_ENABLE_FUNC_DETAIL, a1); }
	int GET_PM_CHAT_INVITE_TYPE(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PM_CHAT_INVITE_TYPE, a1, a2, a3, a4); }
	void CMM_TIMEWARP_FADE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_TIMEWARP_FADE); }
	int CHECK_PUBLIC_HOLIDAY_NEXTDAY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_PUBLIC_HOLIDAY_NEXTDAY, a1, a2); }
	void SET_STR_PUBLIC_HOLIDAY_NEXTDAY(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_STR_PUBLIC_HOLIDAY_NEXTDAY, a1, a2); }
	int GET_CONQUEST_DUNGEON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_CONQUEST_DUNGEON); }
	int GET_DUNGEON_INVITE_CHAT(float a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_DUNGEON_INVITE_CHAT, a1); }
	void EVT_SET_ENABLE_CTRL_KEY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_ENABLE_CTRL_KEY, a1); }
	void CALL_WEAPON_SHOP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WEAPON_SHOP); }
	void CALL_ITEM_SHOP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ITEM_SHOP); }
	void CALL_COMBINE_SHOP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_COMBINE_SHOP); }
	void CALL_QUEST_DAYTIME() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_QUEST_DAYTIME); }
	void SET_QUEST_BEFORE_DUNGEON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_QUEST_BEFORE_DUNGEON); }
	void RESET_QUEST_AFTER_DUNGEON() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RESET_QUEST_AFTER_DUNGEON); }
	void CHECK_CONSET_QUEST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_CONSET_QUEST); }
	void START_QUEST_CLEAR_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::START_QUEST_CLEAR_EFFECT); }
	void CHECK_QUEST_CLEAR_ENEMY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_QUEST_CLEAR_ENEMY); }
	void CHECK_QUEST_CLEAR_BOSS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_QUEST_CLEAR_BOSS); }
	void CHECK_QUEST_CLEAR_ITEM() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_QUEST_CLEAR_ITEM); }
	int GET_COMB_MATPER_MAJOR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_COMB_MATPER_MAJOR, a1); }
	int GET_COMB_MATPER_MINOR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_COMB_MATPER_MINOR, a1); }
	int GET_COMB_RETPER_MAJOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_COMB_RETPER_MAJOR); }
	int GET_COMB_RETPER_MINOR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_COMB_RETPER_MINOR); }
	void CALL_NAME_ENTRY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_NAME_ENTRY); }
	void FCL_SHOP_CHANGE_FLAG() { ScriptingInvoke::Invoke<int>(ScriptFunctions::FCL_SHOP_CHANGE_FLAG); }
	void UI_MISSION_OFFER(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::UI_MISSION_OFFER, a1); }
	void UI_MISSION_END(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::UI_MISSION_END, a1); }
	int UI_MISSION_CHECK_OFFER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::UI_MISSION_CHECK_OFFER, a1); }
	int UI_MISSION_CHECK_END(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::UI_MISSION_CHECK_END, a1); }
	void MISSION_START_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_START_EFFECT); }
	void MISSION_COMPLETE_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_COMPLETE_EFFECT); }
	void CALL_ROUTE_MAP(int a1, int a2, int a3, int a4, int a5) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ROUTE_MAP, a1, a2, a3, a4, a5); }
	void CALL_ITEM_SHOP_EX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ITEM_SHOP_EX); }
	void CALL_WEAPON_SHOP_EX() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WEAPON_SHOP_EX); }
	int MISSION_GET_STATE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_GET_STATE, a1); }
	void MISSION_SET_STATE(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_SET_STATE, a1, a2, a3); }
	void MISSION_UPDATE_EVERY_DAY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_UPDATE_EVERY_DAY); }
	int CALL_PUBLIC_SHOP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PUBLIC_SHOP, a1); }
	void CALL_DIARY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DIARY); }
	int CHECK_PUBLIC_SHOP_STOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_PUBLIC_SHOP_STOCK, a1); }
	void CALL_CHAT_CHECK() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHAT_CHECK); }
	void CALL_CHAT_LIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHAT_LIST); }
	void CALL_QUEST_ORDER() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_QUEST_ORDER); }
	void CALL_CHAT_DIRECT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHAT_DIRECT, a1); }
	void CALL_WEAPON_SHOP_DATA_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WEAPON_SHOP_DATA_LOAD); }
	void CALL_WEAPON_SHOP_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WEAPON_SHOP_END); }
	void CALL_TUTORIAL(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_TUTORIAL, a1, a2); }
	void CALL_GLOBAL_MONEY_PANEL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_GLOBAL_MONEY_PANEL); }
	void DEL_GLOBAL_MONEY_PANEL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::DEL_GLOBAL_MONEY_PANEL); }
	void CALL_WANTED_EXP_PANEL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WANTED_EXP_PANEL, a1); }
	void CALL_WANTED_EXP_NO_WAIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WANTED_EXP_NO_WAIT, a1); }
	void ADD_REPUTATION(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_REPUTATION, a1, a2); }
	void ADD_REPUTATION_NO_WAIT(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_REPUTATION_NO_WAIT, a1, a2); }
	void ADD_REPUTATION_FORCE_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_REPUTATION_FORCE_END); }
	void SET_REPUTATION(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_REPUTATION, a1, a2); }
	int GET_REPUTATION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_REPUTATION, a1); }
	void CALL_ITEM_SHOP_DATA_LOAD() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ITEM_SHOP_DATA_LOAD); }
	int CALL_ARBEIT_BOOK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_ARBEIT_BOOK, a1); }
	void DIRECT_SUBSCRIBE_ARBEIT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::DIRECT_SUBSCRIBE_ARBEIT, a1); }
	int CHECK_SUBSCRIBE_ARBEIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_SUBSCRIBE_ARBEIT, a1); }
	int CHECK_ENABLE_ARBEIT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_ENABLE_ARBEIT, a1); }
	void CALL_WANTED_EXP_BATTLE(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WANTED_EXP_BATTLE, a1, a2); }
	void RESET_INJECTION_EFFECT() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RESET_INJECTION_EFFECT); }
	int SKILLCARD_COPY_CHK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_COPY_CHK); }
	int SKILLCARD_LIST_DISP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_LIST_DISP, a1); }
	void CALL_PHANTOM_NAME_ENTRY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PHANTOM_NAME_ENTRY); }
	void EXEC_EVT_COMBINE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::EXEC_EVT_COMBINE, a1); }
	int GET_PUBLIC_SHOP_BUY_TYPE_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PUBLIC_SHOP_BUY_TYPE_NUM, a1); }
	int GET_PUBLIC_SHOP_ITEM_ID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PUBLIC_SHOP_ITEM_ID, a1, a2); }
	int GET_PUBLIC_SHOP_ITEM_BUY_NUM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PUBLIC_SHOP_ITEM_BUY_NUM, a1, a2); }
	int CHECK_PUBLIC_SHOP_SET_ITEM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_PUBLIC_SHOP_SET_ITEM, a1, a2); }
	int GET_PUBLIC_SHOP_SET_ITEM_PACK_NUM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PUBLIC_SHOP_SET_ITEM_PACK_NUM, a1); }
	int GET_PUBLIC_SHOP_SET_ITEM_PACK_ITEM_ID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PUBLIC_SHOP_SET_ITEM_PACK_ITEM_ID, a1, a2); }
	void PUBLIC_SHOP_BUY_ITEM_COPY() { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUBLIC_SHOP_BUY_ITEM_COPY); }
	void PUBLIC_SHOP_BUY_ITEM_BAG_IN() { ScriptingInvoke::Invoke<int>(ScriptFunctions::PUBLIC_SHOP_BUY_ITEM_BAG_IN); }
	void CALL_CHAT_READ_UN_READ() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHAT_READ_UN_READ); }
	void CALL_CONF_COOPERATION(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CONF_COOPERATION, a1, a2); }
	void CHAT_RESERVE_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_RESERVE_END); }
	void CALL_CHAT_ARRIVAL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHAT_ARRIVAL, a1); }
	void CHAT_ALL_CLEAR() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_ALL_CLEAR); }
	int CHAT_GET_ARRIVAL_MONTH(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_ARRIVAL_MONTH, a1); }
	int CHAT_GET_ARRIVAL_DAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_ARRIVAL_DAY, a1); }
	void CMB_CELL_ERASE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMB_CELL_ERASE); }
	void CHAT_SET_SWITCH(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SET_SWITCH, a1, a2); }
	int CHAT_CHECK_SWITCH(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_CHECK_SWITCH, a1); }
	void CMB_PREPARE_START() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMB_PREPARE_START); }
	void CMB_PREPARE_END() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CMB_PREPARE_END); }
	int CHAT_GET_UNREAD_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_UNREAD_NUM); }
	void OPEN_FAILED_QUEST_LIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::OPEN_FAILED_QUEST_LIST); }
	int SYNC_FAILED_QUEST_LIST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SYNC_FAILED_QUEST_LIST); }
	void RESTART_FAILED_QUEST_LIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::RESTART_FAILED_QUEST_LIST); }
	void CLOSE_FAILED_QUEST_LIST() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CLOSE_FAILED_QUEST_LIST); }
	void CALL_WANTED_EXP_LEVELUP(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_WANTED_EXP_LEVELUP, a1); }
	int MISSION_GET_NUM_STATE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_GET_NUM_STATE, a1); }
	int CHANGE_GLOBAL_MONEY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHANGE_GLOBAL_MONEY, a1, a2); }
	int MISSION_GET_RANK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MISSION_GET_RANK, a1); }
	void ADD_PUBLIC_SHOP_CHOICE_ITEM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::ADD_PUBLIC_SHOP_CHOICE_ITEM, a1, a2, a3); }
	void SET_PUBLIC_SHOP_CHOICE_ITEM(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_PUBLIC_SHOP_CHOICE_ITEM, a1, a2, a3); }
	void CALL_GLOBAL_MONEY_PANEL_EX(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_GLOBAL_MONEY_PANEL_EX, a1); }
	void CHAT_SET_HOLD(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_SET_HOLD, a1, a2); }
	int CHAT_CHECK_HOLD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_CHECK_HOLD, a1); }
	void CALL_GLOBAL_ITEM_PANEL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_GLOBAL_ITEM_PANEL, a1); }
	void DEL_GLOBAL_ITEM_PANEL() { ScriptingInvoke::Invoke<int>(ScriptFunctions::DEL_GLOBAL_ITEM_PANEL); }
	int CHANGE_GLOBAL_ITEM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHANGE_GLOBAL_ITEM); }
	int CHANGE_GLOBAL_ITEM_EX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHANGE_GLOBAL_ITEM_EX, a1); }
	int IMG_CREATE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_CREATE, a1, a2); }
	void IMG_DELETE(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_DELETE, a1); }
	void IMG_LOAD_CALL(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_LOAD_CALL, a1); }
	void IMG_LOAD_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_LOAD_SYNC, a1); }
	void IMG_ANIM_CALL(int a1, int a2, int a3, int a4) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_ANIM_CALL, a1, a2, a3, a4); }
	void IMG_ANIM_SYNC(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_ANIM_SYNC, a1); }
	int CHAT_GET_JOIN_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_GET_JOIN_ID, a1); }
	void IMG_DSP(int a1, int a2) { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_DSP, a1, a2); }
	void IMG_CLS() { ScriptingInvoke::Invoke<int>(ScriptFunctions::IMG_CLS); }
	int CHANGE_GLOBAL_MONEY_EX(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHANGE_GLOBAL_MONEY_EX, a1, a2, a3); }
	void OPEN_QUEST_LIST_DISP() { ScriptingInvoke::Invoke<int>(ScriptFunctions::OPEN_QUEST_LIST_DISP); }
	int CMB_GET_PBOOK_REGIST_RATE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMB_GET_PBOOK_REGIST_RATE); }
	int CALL_FICTION_DRAW() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_FICTION_DRAW); }
	void SET_PUBLIC_SHOP_CHOICE_ITEM_DISCOUNT(int a1, int a2, int a3) { ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_PUBLIC_SHOP_CHOICE_ITEM_DISCOUNT, a1, a2, a3); }
	void CHAT_RESET_DIRECT(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_RESET_DIRECT, a1); }
	void CALL_DIFFICULT_SET() { ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DIFFICULT_SET); }
	void NET_SET_AFTER_SCHOOL_ACTION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_AFTER_SCHOOL_ACTION, a1); }
	void NET_SET_NIGHT_ACTION(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_NIGHT_ACTION, a1); }
	void NET_SET_ANSER_SELECT_NUM(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_ANSER_SELECT_NUM, a1); }
	void NET_SET_ANSER_SUCCESS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_ANSER_SUCCESS, a1); }
	void NET_SET_STRATEGY(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_STRATEGY, a1); }
	void NET_SET_STRATEGY_SUCCESS(int a1) { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_SET_STRATEGY_SUCCESS, a1); }
	void NET_START_AUDIENCE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_START_AUDIENCE); }
	void NET_STOP_AUDIENCE() { ScriptingInvoke::Invoke<int>(ScriptFunctions::NET_STOP_AUDIENCE); }

	int DBG_SET_PC_PARAM(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DBG_SET_PC_PARAM, a1, a2, a3); }
	int DBG_PUT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DBG_PUT, a1); }
	int SEL_SELNO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_SELNO, a1); }
	int SEL_GENERIC_MASK(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC_MASK, a1, a2); }
	int SEL_GENERIC_DISABLE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_GENERIC_DISABLE, a1, a2); }
	int CHK_EX_SEASON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_EX_SEASON, a1); }
	int PERSONA_EVOLUTION_02(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::PERSONA_EVOLUTION_02, a1); }
	int GET_PLAYER_LV(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PLAYER_LV, a1, a2); }
	int GET_EQUIP_PERSONA_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_EQUIP_PERSONA_ID, a1); }
	int MSG_DEVIL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_DEVIL, a1, a2); }
	int CHK_CMB_SPECIAL_TIME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_CMB_SPECIAL_TIME); }
	int FAKE_DATE_SET(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FAKE_DATE_SET, a1, a2, a3, a4); }
	int FAKE_DATE_RESET() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FAKE_DATE_RESET); }
	int SND_VOICE_DLYEVT_SETUP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DLYEVT_SETUP, a1, a2); }
	int SND_VOICE_DLYEVT_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DLYEVT_SYNC); }
	int SND_VOICE_DLYEVT_FREE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SND_VOICE_DLYEVT_FREE); }
	int GET_ITEM_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_TYPE, a1); }
	int GET_EQUIP_ENABLE_PLAYER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_EQUIP_ENABLE_PLAYER, a1); }
	int GET_ITEM_ATTACK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_ITEM_ATTACK, a1); }
	int CHANGE_EQUIP_ITEM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHANGE_EQUIP_ITEM, a1, a2); }
	int DAY_DISP_CHANGE_TYPE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DAY_DISP_CHANGE_TYPE, a1); }
	int CHK_PERSONA_EVOLUTION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_PERSONA_EVOLUTION, a1); }
	int VOICE1_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE1_SYNC); }
	int VOICE2_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE2_SYNC); }
	int VOICE3_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::VOICE3_SYNC); }
	int SET_EQUIP_PERSONA(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_EQUIP_PERSONA, a1); }
	int AWARD_REQUEST(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AWARD_REQUEST, a1, a2); }
	int GET_OPERATION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_OPERATION, a1); }
	int SET_OPERATION(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_OPERATION, a1, a2); }
	int CHECK_EXIST_BEFORE_SAVEDATA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_EXIST_BEFORE_SAVEDATA); }
	int PURGE_RESRC_CACHE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::PURGE_RESRC_CACHE, a1); }
	int SEL_HERO(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_HERO, a1, a2); }
	int SEL_HERO_MASK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_HERO_MASK, a1); }
	int SEL_HERO_NOTSEL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SEL_HERO_NOTSEL, a1); }
	int GET_PC_PARAM_EXP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PC_PARAM_EXP, a1, a2); }
	int GET_LOCAL_TIME(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_LOCAL_TIME, a1); }
	int GET_AWARD_UNLOCK_COUNT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_AWARD_UNLOCK_COUNT); }
	int CHECK_AWARD_UNLOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_AWARD_UNLOCK, a1); }
	int CHECK_MYP_CONTENTS_COMPLETE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_MYP_CONTENTS_COMPLETE, a1); }
	int GET_SYS_SCRIPT_FLAG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_SYS_SCRIPT_FLAG, a1); }
	int SET_SYS_SCRIPT_FLAG(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_SYS_SCRIPT_FLAG, a1, a2); }
	int CHAT_WND_CLS_WAIT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHAT_WND_CLS_WAIT); }
	int CHECK_DISABLE_SHARE_PLAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_DISABLE_SHARE_PLAY, a1); }
	int GET_PC_LEVEL(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PC_LEVEL, a1); }
	int START_PC_LEVEL_UP(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_PC_LEVEL_UP, a1, a2); }
	int FRIEND_GET_SP_SKILL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FRIEND_GET_SP_SKILL, a1, a2); }
	int FLAG_DATA_INPUT(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLAG_DATA_INPUT, a1, a2, a3); }
	int MDL_ANIM_LINK_STOP_SE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MDL_ANIM_LINK_STOP_SE, a1, a2); }
	int FLAG_DATA_INPUT_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLAG_DATA_INPUT_SYNC); }
	int E_LIGHT_RESET() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::E_LIGHT_RESET); }
	int GET_PLATFORM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_PLATFORM); }
	int GET_TEXT_PLATFORM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_TEXT_PLATFORM); }
	int PRESS_WIRE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::PRESS_WIRE); }
	int FLD_GMC_LIGHT_ADD(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_ADD, a1, a2, a3, a4); }
	int FLD_GMC_LIGHT_UPDATE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_UPDATE, a1, a2); }
	int FLD_GMC_LIGHT_GET_UID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_GET_UID, a1, a2); }
	int FLD_GMC_LIGHT_CTRL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_CTRL, a1, a2, a3); }
	int FLD_GMC_LIGHT_FAR_CAMERA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_FAR_CAMERA, a1, a2, a3, a4, a5, a6, a7, a8); }
	int FLD_SWITCH_SET_POS(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SWITCH_SET_POS, a1, a2, a3); }
	int FLD_GET_REST_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_REST_COUNT, a1); }
	int FLD_CHECK_USE_REST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_USE_REST); }
	int FLD_USE_REST(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_USE_REST, a1); }
	int FLD_GET_SEED() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SEED); }
	int FLD_SET_CAMERA_COLLIS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CAMERA_COLLIS, a1); }
	int FLD_CHECK_REST_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_REST_ITEM, a1); }
	int FLD_GET_REST_ITEM_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_REST_ITEM_ID, a1); }
	int FLD_SET_ATDNG_SHOP_EFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ATDNG_SHOP_EFF, a1); }
	int FLD_REQ_ATDNG_SHOP_ENTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_ATDNG_SHOP_ENTER); }
	int FLD_WIRE_OBJ_ENABLE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_WIRE_OBJ_ENABLE, a1, a2); }
	int FLD_GET_SCH_OBJ_COIN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_SCH_OBJ_COIN); }
	int FLD_DNG_CHK_ACCIDENT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DNG_CHK_ACCIDENT, a1); }
	int FLD_GET_STAMP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_STAMP); }
	int FLD_EXIT_DUNGEON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_EXIT_DUNGEON); }
	int FLD_MODEL_ANIM_BLINK(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ANIM_BLINK, a1, a2); }
	int FLD_PC_WEAPON_CHANGE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_WEAPON_CHANGE); }
	int FLD_SET_PAD_LOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_PAD_LOCK, a1); }
	int FLD_CHECK_RAY_HIT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_RAY_HIT, a1, a2); }
	int FLD_CHECK_SUBJECT_MODE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SUBJECT_MODE); }
	int FLD_PC_MODEL_REQ_WIRE_ANIM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_REQ_WIRE_ANIM, a1, a2); }
	int FLD_START_ATDNG_SHOP_ENTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_ATDNG_SHOP_ENTER); }
	int FLD_OBJ_POL_RELOAD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_OBJ_POL_RELOAD); }
	int FLD_NPC_ATTACH_MODEL(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_ATTACH_MODEL, a1, a2, a3); }
	int FLD_SET_MOVE_LOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_MOVE_LOCK, a1); }
	int FLD_SYNC_DOOR_FADE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_DOOR_FADE); }
	int FLD_SYNC_GET_ITEM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SYNC_GET_ITEM); }
	int FLD_NPC_RESET_FBNID_POS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_RESET_FBNID_POS, a1); }
	int FLD_NPC_TURN_AT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TURN_AT, a1, a2); }
	int FLD_NPC_TURN_RESET(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TURN_RESET, a1); }
	int FLD_CHECK_SAVE_DATA_LOAD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_SAVE_DATA_LOAD); }
	int FLD_SET_CHARLIGHT_AMB(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CHARLIGHT_AMB, a1, a2, a3, a4); }
	int FLD_SET_CHARLIGHT_DIFF(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CHARLIGHT_DIFF, a1, a2, a3, a4); }
	int FLD_SET_CHARLIGHT_SPEC(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CHARLIGHT_SPEC, a1, a2, a3, a4); }
	int FLD_SET_CHARIGHT_DEFAULT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_CHARIGHT_DEFAULT, a1); }
	int FLD_CAMERA_GET_YAW() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_GET_YAW); }
	int FLD_CAMERA_GET_PITCH() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_GET_PITCH); }
	int FLD_CAMERA_GET_ROLL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_GET_ROLL); }
	int FLD_ADJUST_DEG_180(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ADJUST_DEG_180, a1); }
	int FLD_PC_ID_GET_CURRENT_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_ID_GET_CURRENT_RESHND, a1); }
	int FLD_REQ_PITFALL_ENTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_PITFALL_ENTER); }
	int FLD_MISSION_LIST_END_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MISSION_LIST_END_SYNC); }
	int FLD_SPOT_FLAG_SET(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SPOT_FLAG_SET, a1); }
	int FLD_REQ_NEXT_SCN_FADE(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_NEXT_SCN_FADE, a1, a2, a3, a4); }
	int FLD_UMBREALLA_CHECK_USE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UMBREALLA_CHECK_USE); }
	int FLD_PC_MODEL_REQ_WIRE_MOVE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_REQ_WIRE_MOVE, a1); }
	int FLD_PC_MODEL_SYNC_WIRE_MOVE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SYNC_WIRE_MOVE, a1); }
	int FLD_CHECK_USE_PARAMUP_FUNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_USE_PARAMUP_FUNC, a1); }
	int FLD_GET_REWARD_NUM_PARAMUP_FUNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_REWARD_NUM_PARAMUP_FUNC, a1); }
	int FLD_GET_REWARD_ID_PARAMUP_FUNC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_REWARD_ID_PARAMUP_FUNC, a1, a2); }
	int FLD_GET_TYPE_PARAMUP_REWARD_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TYPE_PARAMUP_REWARD_ID, a1); }
	int FLD_GET_VALUE_PARAMUP_REWARD_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_VALUE_PARAMUP_REWARD_ID, a1); }
	int FLD_TOOL_GET_CREATE_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_GET_CREATE_NUM); }
	int FLD_GAMBLING_TIME_VISIBLE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GAMBLING_TIME_VISIBLE, a1); }
	int FLD_ACTHIT_SET_ICON_NG(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ACTHIT_SET_ICON_NG, a1, a2); }
	int FLD_SET_WIRE_TARGET(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_WIRE_TARGET, a1); }
	int FLD_PC_MODEL_SET_WIRE_SPEED(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_MODEL_SET_WIRE_SPEED, a1, a2); }
	int FLD_ENTER_BY_WALK_DISABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENTER_BY_WALK_DISABLE); }
	int FLD_SET_WIRE_TARGET_EFFECT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_WIRE_TARGET_EFFECT, a1); }
	int FLD_GET_TOTAL_STAMP_POINT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_TOTAL_STAMP_POINT); }
	int FLD_SET_DBG_ATDNG_PROGRESS(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DBG_ATDNG_PROGRESS, a1); }
	int FLD_GET_QUEST_ATDNG_PARAM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_QUEST_ATDNG_PARAM, a1); }
	int FLD_MODEL_ADJUST_GROUND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_ADJUST_GROUND, a1); }
	int FLD_MODEL_SET_NPC_POS(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_SET_NPC_POS, a1, a2); }
	int FLD_CAMERA_CHECK_LOCK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CAMERA_CHECK_LOCK); }
	int FLD_SEARCH_POL_RESHND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SEARCH_POL_RESHND, a1); }
	int FLD_ANIM_HIT_IMMEDIATE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ANIM_HIT_IMMEDIATE); }
	int FLD_SET_BACK_LOG_LOCK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_BACK_LOG_LOCK, a1); }
	int FLD_ASSIST_GET_DISTINATION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ASSIST_GET_DISTINATION, a1); }
	int FLD_NPC_GREETING_DISABLE_FBNID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GREETING_DISABLE_FBNID, a1, a2); }
	int FLD_AST_SET_REINFORCE_DATA(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_SET_REINFORCE_DATA, a1, a2); }
	int FLD_AST_SET_COOP_DATA(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_SET_COOP_DATA, a1, a2); }
	int FLD_AST_GET_REINFORCE_INDEX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_GET_REINFORCE_INDEX, a1); }
	int FLD_AST_GET_COOP_INDEX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_GET_COOP_INDEX, a1); }
	int FLD_AST_GET_PARAMID_FROM_RFIDX(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_GET_PARAMID_FROM_RFIDX, a1); }
	int FLD_ENEMY_SET_MAD_EFFECT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ENEMY_SET_MAD_EFFECT, a1, a2); }
	int FLD_GET_INDEX_STAMP_POINT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_INDEX_STAMP_POINT, a1); }
	int FLD_GET_INDEX_STAMP_COUNT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_INDEX_STAMP_COUNT, a1); }
	int CALL_DAIFUGOU() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DAIFUGOU); }
	int FLD_CLEAR_COIN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CLEAR_COIN); }
	int FLD_PARTY_STATUS_SAVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_STATUS_SAVE); }
	int FLD_PARTY_HPSP_LOAD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PARTY_HPSP_LOAD); }
	int FLD_AST_COOP_LIST_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_COOP_LIST_CHECK, a1); }
	int FLD_AST_FACIL_LIST_CHECK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_FACIL_LIST_CHECK, a1); }
	int FLD_AST_DISPLAY(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_DISPLAY, a1, a2, a3); }
	int FLD_AST_FACIL_UNLOCK_CHECK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_FACIL_UNLOCK_CHECK); }
	int SET_VTAG_HERO_CALL_PC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_VTAG_HERO_CALL_PC, a1); }
	int FLD_CROWD_SET_HIT_MODEL(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_SET_HIT_MODEL, a1, a2); }
	int FLD_SET_ENEMY_INOUT_EFF(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ENEMY_INOUT_EFF, a1, a2, a3); }
	int FLD_PC_SET_MOVE_SPEED(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_SET_MOVE_SPEED, a1, a2, a3); }
	int FLD_CROWD_ALL_UNMOVED_READ_WAIT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CROWD_ALL_UNMOVED_READ_WAIT); }
	int FLD_NPC_TALK_DISABLE_FBNID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_TALK_DISABLE_FBNID, a1, a2); }
	int FLD_SET_TRANSFORM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_TRANSFORM, a1); }
	int FLD_START_MMT_MAP_EFF(int a1, int a2, int a3, int a4) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_MMT_MAP_EFF, a1, a2, a3, a4); }
	int FLD_END_MMT_MAP_EFF() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_END_MMT_MAP_EFF); }
	int FLD_MEMBER_RECOVER_DIRECT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MEMBER_RECOVER_DIRECT, a1, a2); }
	int FLD_MY_PALACE_ENTER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MY_PALACE_ENTER); }
	int FLD_PC_PARAM_ADD_ON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_PARAM_ADD_ON); }
	int FLD_PANEL_DISP_NO_MAP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PANEL_DISP_NO_MAP, a1); }
	int FLD_PC_PARAM_ADD_DISP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_PC_PARAM_ADD_DISP, a1); }
	int FLD_NPC_NEAR_PAUSE_DISABLE_FBNID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_NEAR_PAUSE_DISABLE_FBNID, a1, a2); }
	int FLD_AST_CHK_SEL_HIDEOUT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_AST_CHK_SEL_HIDEOUT); }
	int FLD_MY_PALACE_GET_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MY_PALACE_GET_ITEM, a1); }
	int FLD_CHECK_USABLE_SNEAKING_ITEM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_CHECK_USABLE_SNEAKING_ITEM, a1); }
	int FLD_GET_QR_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_QR_ID); }
	int FLD_DISP_QR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DISP_QR, a1); }
	int FLD_BG_WEATHER_EFF_VISIBLE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_BG_WEATHER_EFF_VISIBLE, a1); }
	int FLD_SE_PLAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SE_PLAY, a1); }
	int FLD_DEC_SAFEROOM_ALERT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DEC_SAFEROOM_ALERT); }
	int FLD_UPDATE_DAYS_ALERT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_UPDATE_DAYS_ALERT); }
	int FLD_DAIFUGOU_SET_SEL_NO(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DAIFUGOU_SET_SEL_NO, a1); }
	int FLD_NPC_SET_NAMEID(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_SET_NAMEID, a1, a2); }
	int FLD_NPC_GET_NAMEID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_NPC_GET_NAMEID, a1); }
	int FLD_TOOL_SCR_GET_BONUS_NUM(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_TOOL_SCR_GET_BONUS_NUM, a1, a2); }
	int FLD_MAP_PANEL_CANCEL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MAP_PANEL_CANCEL); }
	int FLD_COMSE_PLAY(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_COMSE_PLAY, a1); }
	int FLD_COMSE_STOP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_COMSE_STOP, a1); }
	int FLD_GMC_LIGHT_SET_SCRIPT(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_SET_SCRIPT, a1, a2, a3); }
	int FLD_GMC_LIGHT_GET_VALUE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GMC_LIGHT_GET_VALUE); }
	int FLD_SET_BATTLE_FIELD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_BATTLE_FIELD, a1, a2); }
	int FLD_SET_ANOTHER_ENV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_ANOTHER_ENV, a1); }
	int FLD_REQ_CA_RIPPLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_REQ_CA_RIPPLE); }
	int FLD_MY_PALACE_REQ_ANNOUNCE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MY_PALACE_REQ_ANNOUNCE); }
	int FLD_START_TELOP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_START_TELOP, a1); }
	int FLD_GET_GROUND_Y(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_GROUND_Y, a1, a2, a3); }
	int FLD_SET_DEFAULT_ALERT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_SET_DEFAULT_ALERT); }
	int FLD_GET_COIN_COUNT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_GET_COIN_COUNT); }
	int FLD_DNG_RESET_TBOX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_DNG_RESET_TBOX); }
	int EVT_FAST_PROC_END_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_FAST_PROC_END_SYNC); }
	int FLD_MODEL_CLEAR_ANIM_EFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_MODEL_CLEAR_ANIM_EFF, a1); }
	int FLD_ROADMAP_MMAP_CLOSE_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FLD_ROADMAP_MMAP_CLOSE_SYNC); }
	int AI_CHK_FRHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRHOJO2, a1); }
	int AI_CHK_ENHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENHOJO2, a1); }
	int AI_CHK_FRIDHOJO2(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDHOJO2, a1, a2); }
	int AI_CHK_ENIDHOJO2(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ENIDHOJO2, a1, a2); }
	int AI_TAR_HOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HOJO2, a1); }
	int AI_TAR_NOTHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NOTHOJO2, a1); }
	int AI_GET_FRHOJO2_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRHOJO2_ON, a1); }
	int AI_GET_FRHOJO2_OFF(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_FRHOJO2_OFF, a1); }
	int AI_GET_ENHOJO2_ON(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_ENHOJO2_ON, a1); }
	int AI_GET_UNIHOJO2_OFF_FR(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO2_OFF_FR, a1); }
	int AI_GET_UNIHOJO2_OFF_EN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO2_OFF_EN, a1); }
	int AI_GET_UNIHOJO2_ON_EN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_UNIHOJO2_ON_EN, a1); }
	int AI_CHK_UNIHOJO2(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNIHOJO2, a1, a2); }
	int AI_CHK_MYHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYHOJO2, a1); }
	int AI_CHK_NOTMYHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTMYHOJO2, a1); }
	int AI_CHK_NOTFRHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTFRHOJO2, a1); }
	int AI_CHK_NOTENHOJO2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_NOTENHOJO2, a1); }
	int AI_CHK_MYUNSTABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_MYUNSTABLE); }
	int AI_CHK_UNSTABLE_UID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNSTABLE_UID, a1); }
	int BTL_GET_CURRENT_CHARAID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_CURRENT_CHARAID); }
	int AI_CHK_FRIDTECH(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_FRIDTECH, a1); }
	int AI_GET_BULLET() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_GET_BULLET); }
	int AI_TAR_UNSTABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_UNSTABLE); }
	int AI_TAR_NUNSTABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NUNSTABLE); }
	int AI_TAR_HOUMA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_HOUMA); }
	int AI_TAR_NHOUMA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_NHOUMA); }
	int AI_CHK_UNSTABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNSTABLE); }
	int AI_CHK_HOUMA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_HOUMA); }
	int AI_CHK_UNSTABLE_BAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNSTABLE_BAD, a1); }
	int AI_CHK_UNSTABLE_NBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_UNSTABLE_NBAD, a1); }
	int AI_TAR_UNSTABLE_BAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_UNSTABLE_BAD, a1); }
	int AI_TAR_UNSTABLE_NBAD(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_UNSTABLE_NBAD, a1); }
	int AI_CHK_GUN_KILL_EN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_GUN_KILL_EN); }
	int AI_TAR_GUN_KILL_EN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_TAR_GUN_KILL_EN); }
	int AI_CHK_SP_ATTACK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_SP_ATTACK); }
	int AI_ACT_SP_ATTACK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_SP_ATTACK); }
	int BTL_GET_CHALLENGE_REWARD(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_CHALLENGE_REWARD, a1, a2); }
	int BTL_REQ_ASSIST_SEQ(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_REQ_ASSIST_SEQ, a1, a2); }
	int AI_ACT_BADSKILL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_ACT_BADSKILL); }
	int AI_CHK_ID_STRONG_FLAG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CHK_ID_STRONG_FLAG, a1); }
	int BTL_GET_CHALLENGE_MODE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_CHALLENGE_MODE, a1); }
	int BTL_GET_CHALLENGE_NUMBER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_CHALLENGE_NUMBER, a1); }
	int BTL_GET_CHALLENGE_REWARD_TYPE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_CHALLENGE_REWARD_TYPE, a1, a2); }
	int BTL_GER_TALK_ABI_MEMBER_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GER_TALK_ABI_MEMBER_ID, a1); }
	int BTL_ITEM_STORAGE_SAVE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ITEM_STORAGE_SAVE); }
	int BTL_ITEM_STORAGE_LOAD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ITEM_STORAGE_LOAD); }
	int BTL_ITEM_STORAGE_CLEAR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ITEM_STORAGE_CLEAR); }
	int BTL_ITEM_STORAGE_CHECK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_ITEM_STORAGE_CHECK); }
	int AI_CANCEL_GUARDORDER(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::AI_CANCEL_GUARDORDER, a1); }
	int BTL_GET_ASSIST_PC_ID() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::BTL_GET_ASSIST_PC_ID); }
	int MSG_BACKLOG_PAUSE_ON() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_BACKLOG_PAUSE_ON); }
	int MSG_BACKLOG_PAUSE_OFF() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MSG_BACKLOG_PAUSE_OFF); }
	int EVT_LEADING_REQUEST(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_LEADING_REQUEST, a1, a2); }
	int EVT_SET_SKIP_KEEP_FLAG(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_SKIP_KEEP_FLAG, a1); }
	int EVT_GET_SKIP_KEEP_FLAG() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_GET_SKIP_KEEP_FLAG); }
	int EVT_MSG_LOG_CLEAR() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MSG_LOG_CLEAR); }
	int EVT_FAST_PROC_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_FAST_PROC_START); }
	int EVT_FAST_PROC_END() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_FAST_PROC_END); }
	int EVT_FAST_CANCEL_REQ() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_FAST_CANCEL_REQ); }
	int CMM_MEMORY_GAME_SET_BUTTON(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MEMORY_GAME_SET_BUTTON, a1, a2, a3, a4, a5, a6, a7, a8); }
	int CMM_MEMORY_GAME_SET_TIME(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MEMORY_GAME_SET_TIME, a1); }
	int CMM_MEMORY_GAME_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_MEMORY_GAME_START); }
	int CMM_CHANGE_ARCANA_YOSIZAWA() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHANGE_ARCANA_YOSIZAWA); }
	int CMM_CHANGE_DISP_ID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHANGE_DISP_ID, a1); }
	int CMM_CHK_RANKUP_EVENT_NEXT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_RANKUP_EVENT_NEXT, a1, a2); }
	int CMM_CHK_INSERT_EVENT_RUBURAN(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_CHK_INSERT_EVENT_RUBURAN, a1, a2); }
	int EVT_CA_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_CA_START); }
	int EVT_CA_END() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_CA_END); }
	int EVT_SET_KFREE_SETTING(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_SET_KFREE_SETTING, a1, a2); }
	int CMM_HOLIDAY_INVITE_CHATNO(int a1, int a2, int a3, int a4, int a5) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_HOLIDAY_INVITE_CHATNO, a1, a2, a3, a4, a5); }
	int EVT_CA_BUTTON_ANIME() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_CA_BUTTON_ANIME); }
	int EVT_MOVIE_SEEK_SYNC(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MOVIE_SEEK_SYNC, a1); }
	int EVT_LEADING_REQUEST_TABLE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_LEADING_REQUEST_TABLE, a1, a2); }
	int CMM_DELETE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_DELETE, a1); }
	int CMM_GET_POINT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_POINT, a1); }
	int CMM_GET_NEXT_POINT(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_GET_NEXT_POINT, a1); }
	int EVT_PAUSE_PADOK_DISABLE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_PAUSE_PADOK_DISABLE, a1); }
	int CMM_ADD_POINT_ID_ST(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_ADD_POINT_ID_ST, a1, a2, a3); }
	int CMM_SYNC_POINT_ID_ST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CMM_SYNC_POINT_ID_ST); }
	int EVT_BACKLOG_STOP(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_BACKLOG_STOP, a1); }
	int EVT_MOUSE_INPUT_ENABLE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::EVT_MOUSE_INPUT_ENABLE); }
	int UPDATE_CMB_EVERYMORNING() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::UPDATE_CMB_EVERYMORNING); }
	int CALL_DARTS_TASK_START(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_START, a1, a2); }
	int CALL_DARTS_PLAY(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_PLAY, a1, a2); }
	int DARTS_LOOP_COUNT_ADD() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_LOOP_COUNT_ADD); }
	int DARTS_LOOP_COUNT_CHK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_LOOP_COUNT_CHK); }
	int CALL_DARTS_TASK_END() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_END); }
	int CALL_PUBLIC_SHOP_TV(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PUBLIC_SHOP_TV, a1); }
	int CALL_STAMP_SHOP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_STAMP_SHOP); }
	int CALL_MEMENTOS_SHOP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_MEMENTOS_SHOP); }
	int CALL_EXROOT_END_DRAW(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_EXROOT_END_DRAW, a1); }
	int SET_COMBINE_SPECIAL_MODE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SET_COMBINE_SPECIAL_MODE, a1); }
	int CALL_BILLIARDS_START(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BILLIARDS_START, a1); }
	int DARTS_SET_NPC_SCORE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_SET_NPC_SCORE, a1, a2); }
	int CALL_DARTS_TASK_START_EX(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_START_EX, a1, a2, a3); }
	int CALL_DARTS_PLAY_EX(int a1, int a2, int a3, int a4, int a5) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_PLAY_EX, a1, a2, a3, a4, a5); }
	int CALL_VINTAGE_SHOP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_VINTAGE_SHOP); }
	int CALL_DARTS_TASK_START_ROUND(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_START_ROUND, a1); }
	int CALL_DARTS_PLAY_ROUND(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_PLAY_ROUND, a1, a2, a3); }
	int GET_VINTAGE_SHOP_SELL_NUM() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::GET_VINTAGE_SHOP_SELL_NUM); }
	int CHK_DARTS_BUST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHK_DARTS_BUST); }
	int CALL_PERSONA_SKILL_CARD_SHOP() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PERSONA_SKILL_CARD_SHOP); }
	int CALL_DARTS_WIPE_FADE_IN() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_WIPE_FADE_IN); }
	int CALL_DARTS_WIPE_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_WIPE_START); }
	int DARTS_WIPE_SYNC() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_WIPE_SYNC); }
	int CALL_DARTS_WIPE_END() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_WIPE_END); }
	int DARTS_WIPE_TIMER_CHECK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_WIPE_TIMER_CHECK); }
	int DARTS_WIPE_START_FADE_IN(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_WIPE_START_FADE_IN, a1); }
	int CALL_DARTS_MEMB_LIST() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_MEMB_LIST); }
	int SKILLCARD_COPY_CONFIRM(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_COPY_CONFIRM, a1); }
	int SKILLCARD_LIST_DISP_CREATE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_LIST_DISP_CREATE, a1); }
	int SKILLCARD_LIST_DISP_CREATE_ALL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_LIST_DISP_CREATE_ALL); }
	int SKILLCARD_CREATE_CHK(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_CREATE_CHK, a1); }
	int SKILLCARD_CREATE_CHK_ALL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SKILLCARD_CREATE_CHK_ALL); }
	int CALL_DARTS_TASK_START_RESRC(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_START_RESRC, a1, a2); }
	int CALL_CHALLENGE_BTL_SEL() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_CHALLENGE_BTL_SEL); }
	int CONFIRM_PS_STATUS(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CONFIRM_PS_STATUS, a1, a2); }
	int SELECT_FRIEND(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::SELECT_FRIEND, a1, a2, a3); }
	int CHECK_HAVE_INCENSE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CHECK_HAVE_INCENSE); }
	int START_VIDEO_VIEWER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_VIDEO_VIEWER); }
	int START_SOUND_VIEWER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_SOUND_VIEWER); }
	int START_IMAGE_VIEWER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_IMAGE_VIEWER); }
	int COMFIRM_PS_PARAM_UP(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::COMFIRM_PS_PARAM_UP, a1, a2, a3, a4, a5, a6, a7); }
	int CALL_DARTS_MEMB_LIST_CONF() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_MEMB_LIST_CONF); }
	int START_PALACE_MAKER() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_PALACE_MAKER); }
	int CALL_TEC_RANK_START() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_TEC_RANK_START); }
	int CALL_TEC_RANK_START_EX() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_TEC_RANK_START_EX); }
	int CALL_BILLIARDS_RESULT_START(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_BILLIARDS_RESULT_START, a1, a2); }
	int START_DARTS_BATONTOUCH(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_DARTS_BATONTOUCH, a1, a2); }
	int START_AWARD_VIEWER2(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::START_AWARD_VIEWER2, a1); }
	int MYP_CONF_OBJECT(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::MYP_CONF_OBJECT, a1, a2); }
	int DARTS_CMD_INITIALIZE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_INITIALIZE, a1); }
	int DARTS_CMD_GET_PCID(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_GET_PCID, a1); }
	int DARTS_CMD_RELEASE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_RELEASE); }
	int DARTS_CMD_GET_POSITION(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_GET_POSITION, a1); }
	int CALL_DARTS_TASK_START_RESRC_EX(int a1, int a2, int a3) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_DARTS_TASK_START_RESRC_EX, a1, a2, a3); }
	int DARTS_CMD_CHK_NPC_FINISH(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_CHK_NPC_FINISH, a1); }
	int DARTS_CMD_SET_FINISH_MODE() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_SET_FINISH_MODE); }
	int DARTS_CMD_GET_CHALLENGE_POINT() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_GET_CHALLENGE_POINT); }
	int DARTS_CMD_COMPARISON(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_COMPARISON, a1, a2); }
	int DARTS_CMD_GET_CHALLENGE_HIGH_RANK() { return ScriptingInvoke::Invoke<int>(ScriptFunctions::DARTS_CMD_GET_CHALLENGE_HIGH_RANK); }
	int CALL_PUBLIC_SHOP_FREE(int a1) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::CALL_PUBLIC_SHOP_FREE, a1); }
	int FCL_SET_CUSTOM_TYPE(int a1, int a2) { return ScriptingInvoke::Invoke<int>(ScriptFunctions::FCL_SET_CUSTOM_TYPE, a1, a2); }
}