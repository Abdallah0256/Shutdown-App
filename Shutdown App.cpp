#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main() {
	char choice;
	printf("Hello,\nWarning: This app will shutdown/restart you PC in 30s | logout in 0s\nNote: This app work in Windows only\n[1] - Shutdown\n[2] - Restart\n[3] - Logout\n[4] - Cancel\n[5] - Exit App\n>>");
	scanf("%d", &choice);
	switch (choice) {
	case 1: 
		system("shutdown -s -t 30");
		break;
	case 2:
		system("shutdown -r -t 30");
		break;
	case 3:
		system("shutdown -f");
		break;
	case 4:
		system("shutdown -a");
		break;
	case 5:
		exit(EXIT_SUCCESS);
		break;
	
	default: {
		printf("Error...\nResarting in 5 seconds");
		Sleep(5000);
		system("CLS");
		main();
	}
	}
}