#pragma

class c_globals {
public:
	bool active = true;

	int selectedTab = 0;

	float controlAmountX = 100;
	float controlAmountY = 100;
	int selectedRod = 0;

	bool enableAutoCode = false;
	bool sendCodeKeys = false;
	int codeNum1 = 1;
	int codeNum2 = 2;
	int codeNum3 = 3;
	int codeNum4 = 4;
	int delayBetweenKeypress = 100;

	bool enableAntiAfk = true;

	bool enableBgrade = false;
	int selectedBgradeMaterial = 0;
	int selectedUpgradeType = 0;
	int upgradeSpeed = 50;
	int upgradeDelay = 0;
	int x_wood;
	int y_wood;
	int x_stone;
	int y_stone;
	int x_metal;
	int y_metal;
	int x_hqm;
	int y_hqm;

	float userSens = 1;
	int userFov = 90;
} globals;

class keys {
public:
	int enableBind = 0;
	int enableCodeBind = 0;
} keys;