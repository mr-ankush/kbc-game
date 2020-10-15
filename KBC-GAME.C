#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int playchoice,i;
	char ch=177,ce=178,ans,A,B,C,D,a,b,c,d,name[50];
	clrscr();
	gotoxy(23,2);
	printf("User, Please Enter Your Lucky Name... ");
	gotoxy(31,4);
	printf("--------------------");
	gotoxy(30,5);
	printf("|");
	gotoxy(31,6);
	printf("--------------------");
	gotoxy(51,5);
	printf("|");
	gotoxy(1,8);
	textcolor(WHITE);
	cprintf(" ______________________________________________________________________________");
	gotoxy(18,10);
	textcolor(YELLOW);
	cprintf("(if You Not Interested In Filling Your's Name)");
	gotoxy(30,12);
	textcolor(YELLOW);
	cprintf("Press ENTER : For Skip");
	gotoxy(1,13);
	textcolor(WHITE);
	cprintf(" ______________________________________________________________________________");
	gotoxy(4,15);
	textcolor(YELLOW);
	cprintf("(If You Want To Use Symbolic Character As Your's Name, Follow Commands...)");
	gotoxy(6,18);
	printf("Ctrl + A : for SMILEY FACE");
	gotoxy(51,18);
	printf("Ctrl + N : for MUSIC ICON");
	gotoxy(6,20);
	printf("Ctrl + C : for LOVE ICON");
	gotoxy(51,20);
	printf("Ctrl + D : for RHOMBUS ICON");
	gotoxy(51,24);
	printf("Ctrl + L : for MALE GENDER");
	gotoxy(6,24);
	printf("Ctrl + K : for FEMALE GENDER");
	gotoxy(6,22);
	printf("Ctrl + F : for CARDS ICON");
	gotoxy(51,22);
	printf("Ctrl + Y : for ARROW ICON");
	gotoxy(32,5);
	gets(name);
	clrscr();
	printf("\n\n\n\n\n\t\t   --------------------------------------------\n\t\t  |  WELCOME IN Koun Banega Crore Pati - 2017  | \n\t\t   --------------------------------------------\n");
	textcolor(WHITE);
	gotoxy(35,13);
	cprintf(" Loading... ");
	gotoxy(27,15);
	for(i=0;i<=26;i++)
	{
	textcolor(DARKGRAY);
	cprintf("%c",ch);
	}
	gotoxy(27,15);
	for(i=0;i<=26;i++)
	{
	delay(50);
	textcolor(WHITE);
	cprintf("%c",ce);
	}
	{
	delay(150);
	cprintf(" 100 %");
	}
	{
	delay(500);
	textcolor(YELLOW);
	textcolor(4888+RED);
	gotoxy(2,24);
	cprintf("Current Time: %s",__TIME__);
	gotoxy(56,24);
	cprintf("Current Day: %s",__DATE__);
	}
	{
	delay(350);
	gotoxy(35,22);
	textcolor(YELLOW);
	cprintf("Click Here...");
	}
	getch();
	main:
	clrscr();
	textbackground(WHITE);
	textcolor(RED);
	gotoxy(2,1);
	cprintf(" Welcome User: %s  ",strupr(name));
	textbackground(BLACK);
	textcolor(YELLOW);
	gotoxy(67,1);
	cprintf(" H O L K A R ");
	gotoxy(29,5);
	cprintf("-------------------------");
	gotoxy(28,6);
	cprintf("|");
	gotoxy(31,6);
	cprintf("WELCOME IN KBC - 2017");
	gotoxy(54,6);
	cprintf("|");
	gotoxy(29,7);
	cprintf("-------------------------");
	gotoxy(5,12);
	cprintf("Press 1: for PLAY KBC GAME.");
	gotoxy(5,15);
	cprintf("Press 2: for CREDIT OF GAME.");
	gotoxy(5,18);
	cprintf("Press 3: for EXIT OR TERMINATED GAME.");
	gotoxy(15,21);
	cprintf("Plaese Enter A Valid Your Choice    ");
	scanf("%d",&playchoice);
	clrscr();
	switch(playchoice)
	{
		case 1:
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------\n");
			gotoxy(26,15);
			cprintf("Are You Ready For Play KBC Game.");
			gotoxy(25,18);
			cprintf("Press Any Key To Start KBC Game...");
			gotoxy(1,23);
			cprintf("INSTRUCTIONS:KBC Game Contain 5 questions & All Are Compulsory To Win This Game.");
			gotoxy(65,25);
			cprintf("BEST OF LUCK...");
			getch();
			clrscr();
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------");
			gotoxy(18,12);
			cprintf("* * *   * * *   *   *   *   *   * *        **");
			gotoxy(18,13);
			cprintf("*   *   *   *   *   *   **  *   *   *     ***");
			gotoxy(18,14);
			cprintf("* * *   *   *   *   *   * * *   *   *      **");
			gotoxy(18,15);
			cprintf("* *     *   *   *   *   *  **   *   *      **");
			gotoxy(18,16);
			cprintf("*   *   * * *   * * *   *   *   * *      ******");
			gotoxy(35,18);
			cprintf("Best Of Luck");
			textcolor(WHITE);
			gotoxy(35,20);
			cprintf(" Loading... ");
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			delay(125);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,23);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			textcolor(YELLOW);
			cprintf("H O L K A R");
			printf("\n\n\t\t       -------------------------------------\n\t\t      |  WELCOME IN Koun Banega Crore Pati  | \n\t\t       -------------------------------------\n");
			printf("\n\t\t\t    Your Credit Score is Rs. 0.");
			printf("\n\t\t\tYour 1st Question is for Rs. 1 Lakh.\n");
			fflush(stdin);
			printf("\n   Question1:\n\n  From Your Body, Which Part doesn't growth lifetime\n   (i.e. Doesn't Increases With Your Age) ?");
			printf("\n\n\tA.\tLips\t\t\t\tB.\tTongue\n\n\tC.\tEyes\t\t\t\tD.\tEars\n");
			printf("\n\n   Your Choice is\t");
			scanf("%c",&ans);
			switch(ans)
			{
				case 'A':
				case 'a':
				case 'B':
				case 'b':
				case 'D':
				case 'd':
					printf("\n\t\t   Your Answer is Wrong.");
					printf("\n\t\t   You Are terminated From This Game,");
					printf("\n\t\t   Play Again.");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
				case 'C':
				case 'c':
					printf("\n\t\tRight Answer, You Won The 1st Round. ");
					printf("\n\t\tYour Credit Score is Rs. 1 Lakh, Well-Done.");
					printf("\n\t\tPress Any Key For Next (2nd) Round...");
					break;
				default:
					printf("\n\t\t   Your Choice is Not Valid,");
					printf("\n\t\t   Try Again...");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
			}
			if(ans=='c'||ans=='C')
			{
			getch();
			clrscr();
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------\n");
			gotoxy(18,12);
			cprintf("* * *   * * *   *   *   *   *   * *      *****");
			gotoxy(18,13);
			cprintf("*   *   *   *   *   *   **  *   *   *        *");
			gotoxy(18,14);
			cprintf("* * *   *   *   *   *   * * *   *   *    *****");
			gotoxy(18,15);
			cprintf("* *     *   *   *   *   *  **   *   *    *");
			gotoxy(18,16);
			cprintf("*   *   * * *   * * *   *   *   * *      *****");
			gotoxy(35,18);
			cprintf("Best Of Luck");
			textcolor(WHITE);
			gotoxy(35,20);
			cprintf(" Loading... ");
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			delay(125);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,23);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			printf("H O L K A R");
			printf("\n\n\t\t       -------------------------------------\n\t\t      |  WELCOME IN Koun Banega Crore Pati  | \n\t\t       -------------------------------------\n");
			printf("\n\t\t\t  Your Credit Score is Rs. 1 Lakh.");
			printf("\n\t\t\tYour 2nd Question is for Rs. 4 Lakh.\n");
			fflush(stdin);
			printf("\n   Question2:\n\n   Which One Is The Roman Number Form Of 3999 ?");
			printf("\n\n\tA.\tDDDCDXCIX\t\t\t\tB.\tMMMCMXCIX\n\n\tC.\tMMMCDIC\t\t\t\t\tD.\tDDDCMXCIX\n");
			printf("\n\n   Your Choice is\t");
			scanf("%c",&ans);
			switch(ans)
			{
				case 'A':
				case 'a':
				case 'C':
				case 'c':
				case 'D':
				case 'd':
					printf("\n\t\t   Your Answer is Wrong.");
					printf("\n\t\t   You Are terminated From This Game,");
					printf("\n\t\t   Play Again.");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
				case 'B':
				case 'b':
					printf("\n\t\tRight Answer, You Won The 2nd Round. ");
					printf("\n\t\tYour Credit Score is Rs. 5 Lakh, Well-Done.");
					printf("\n\t\tPress Any Key For Next (3rd) Round...");
					break;
				default:
					printf("\n\t\t   Your Choice is Not Valid,");
					printf("\n\t\t   Try Again...");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
			}
			if(ans=='b'||ans=='B')
			{
			getch();
			clrscr();
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------");
			gotoxy(18,12);
			cprintf("* * *   * * *   *   *   *   *   * *      *****");
			gotoxy(18,13);
			cprintf("*   *   *   *   *   *   **  *   *   *        *");
			gotoxy(18,14);
			cprintf("* * *   *   *   *   *   * * *   *   *    *****");
			gotoxy(18,15);
			cprintf("* *     *   *   *   *   *  **   *   *        *");
			gotoxy(18,16);
			cprintf("*   *   * * *   * * *   *   *   * *      *****");
			gotoxy(35,18);
			cprintf("Best Of Luck");
			textcolor(WHITE);
			gotoxy(35,20);
			cprintf(" Loading... ");
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			delay(125);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			gotoxy(35,23);
			textcolor(YELLOW);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			printf("H O L K A R");
			printf("\n\n\t\t       -------------------------------------\n\t\t      |  WELCOME IN Koun Banega Crore Pati  | \n\t\t       -------------------------------------\n");
			printf("\n\t\t\t  Your Credit Score is Rs. 5 Lakh.");
			printf("\n\t\t\tYour 3rd Question is for Rs. 20 Lakh.\n");
			fflush(stdin);
			printf("\n   Question3:\n\n   Earth Rotates On Its Axis From ?");
			printf("\n\n\tA.\tWest to East\t\t\t\tB.\tEast to West\n\n\tC.\tSouth to North\t\t\t\tD.\tNorth to South\n");
			printf("\n\n   Your Choice is\t");
			scanf("%c",&ans);
			switch(ans)
			{
				case 'B':
				case 'b':
				case 'C':
				case 'c':
				case 'D':
				case 'd':
					printf("\n\t\t   Your Answer is Wrong.");
					printf("\n\t\t   You Are terminated From This Game,");
					printf("\n\t\t   Play Again.");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
				case 'A':
				case 'a':
					printf("\n\t\tRight Answer, You Won The 3rd Round. ");
					printf("\n\t\tYour Credit Score is Rs. 25 Lakh, Well-Done.");
					printf("\n\t\tPress Any Key For Next (4th) Round...");
					break;
				default:
					printf("\n\t\t   Your Choice is Not Valid,");
					printf("\n\t\t   Try Again...");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
			}
			if(ans=='a'||ans=='A')
			{
			getch();
			clrscr();
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------");
			gotoxy(18,12);
			cprintf("* * *   * * *   *   *   *   *   * *      *   *");
			gotoxy(18,13);
			cprintf("*   *   *   *   *   *   **  *   *   *    *   *");
			gotoxy(18,14);
			cprintf("* * *   *   *   *   *   * * *   *   *    *****");
			gotoxy(18,15);
			cprintf("* *     *   *   *   *   *  **   *   *        *");
			gotoxy(18,16);
			cprintf("*   *   * * *   * * *   *   *   * *          *");
			gotoxy(35,18);
			cprintf("Best Of Luck");
			textcolor(WHITE);
			gotoxy(35,20);
			cprintf(" Loading... ");
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			delay(125);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,23);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			printf("H O L K A R");
			printf("\n\n\t\t       -------------------------------------\n\t\t      |  WELCOME IN Koun Banega Crore Pati  | \n\t\t       -------------------------------------\n");
			printf("\n\t\t\t  Your Credit Score is Rs. 25 Lakh.");
			printf("\n\t\t\tYour 4th Question is for Rs. 35 Lakh.\n");
			fflush(stdin);
			printf("\n   Question4:\n\n   First Chemical Element Invented In Laboratory ?");
			printf("\n\n\tA.\tOxygen\t\t\t\tB.\tNitrogen\n\n\tC.\tAmmonia\t\t\t\tD.\tUrea\n");
			printf("\n\n   Your Choice is\t");
			scanf("%c",&ans);
			switch(ans)
			{
				case 'B':
				case 'b':
				case 'C':
				case 'c':
				case 'A':
				case 'a':
					printf("\n\t\t   Your Answer is Wrong.");
					printf("\n\t\t   You Are terminated From This Game,");
					printf("\n\t\t   Play Again.");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
				case 'D':
				case 'd':
					printf("\n\t\tRight Answer, You Won The 4th Round. ");
					printf("\n\t\tYour Credit Score is Rs. 60 Lakh, Well-Done.");
					printf("\n\t\tPress Any Key For Next (5th & Last) Round...");
					break;
				default:
					printf("\n\t\t   Your Choice is Not Valid,");
					printf("\n\t\t   Try Again...");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
			}
			if(ans=='d'||ans=='D')
			{
			getch();
			clrscr();
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------\n");
			gotoxy(18,12);
			cprintf("* * *   * * *   *   *   *   *   * *      *****");
			gotoxy(18,13);
			cprintf("*   *   *   *   *   *   **  *   *   *    *    ");
			gotoxy(18,14);
			cprintf("* * *   *   *   *   *   * * *   *   *    *****");
			gotoxy(18,15);
			cprintf("* *     *   *   *   *   *  **   *   *        *");
			gotoxy(18,16);
			cprintf("*   *   * * *   * * *   *   *   * *      *****");
			gotoxy(35,18);
			cprintf("Best Of Luck");
			printf("\n\n");
			textcolor(WHITE);
			gotoxy(35,20);
			cprintf(" Loading... ");
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,21);
			for(i=0;i<=26;i++)
			{
			delay(125);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,23);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			printf("H O L K A R");
			printf("\n\n\t\t       -------------------------------------\n\t\t      |  WELCOME IN Koun Banega Crore Pati  | \n\t\t       -------------------------------------\n");
			printf("\n\t\t\t  Your Credit Score is Rs. 60 Lakh.");
			printf("\n\t\t\tYour 5th Question is for Rs. 40 Lakh.\n");
			fflush(stdin);
			printf("\n   Question5:\n\n   First Man Who Goes In Space ?");
			printf("\n\n\tA.\tNeil Armstrong\t\t\t\tB.\tYuri Gagarin\n\n\tC.\tWilliam Anders\t\t\t\tD.\tYuri Artyukhin\n");
			printf("\n\n   Your Choice is\t");
			scanf("%c",&ans);
			switch(ans)
			{
				case 'D':
				case 'd':
				case 'C':
				case 'c':
				case 'A':
				case 'a':
					printf("\n\t\t   Your Answer is Wrong.");
					printf("\n\t\t   You Are terminated From This Game,");
					printf("\n\t\t   Play Again.");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
				case 'B':
				case 'b':
					printf("\n\t\tRight Answer, You Won The 5th Round. ");
					printf("\n\t\tYour Credit Score is Rs. 1 Crore, Well-Done.");
					printf("\n\t\tCongratulations...");
					break;
				default:
					printf("\n\t\t   Your Choice is Not Valid,");
					printf("\n\t\t   Try Again...");
					getche();
					clrscr();
					textcolor(YELLOW);
					gotoxy(67,1);
					cprintf("H O L K A R");
					gotoxy(32,4);
					cprintf("\"You Lose The Game\"");
					gotoxy(23,6);
					cprintf("------------------------------------");
					gotoxy(22,7);
					cprintf("|  Thank You For Playing KBC - 2017  |");
					gotoxy(23,8);
					cprintf("------------------------------------");
					gotoxy(31,13);
					cprintf("Credit of Game Goes To");
					gotoxy(13,15);
					cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
					gotoxy(28,17);
					cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
					gotoxy(2,22);
					cprintf("More Info At:");
					gotoxy(5,23);
					cprintf("E - Mail : ankush13lokhande@gmail.com");
					gotoxy(5,24);
					cprintf("Cont NO. : 887 115 22 19");
					gotoxy(64,24);
					cprintf(" Thank - You ");
					getch();
					goto main;
			}
			if(ans=='b'||ans=='B')
			getche();
			clrscr();
			textcolor(WHITE);
			gotoxy(35,12);
			cprintf(" Loading... ");
			gotoxy(27,14);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,14);
			for(i=0;i<=26;i++)
			{
			delay(120);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,18);
			cprintf("Click Here...");
			getche();
			clrscr();
			textcolor(LIGHTRED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			gotoxy(67,1);
			printf("H O L K A R");
			printf("\n\n\t\t\t  \"You Won The KBC - 2017 Game\"\n\n\t\t\t  C O N G R A T U L A T I O N S");
			printf("\n\n\n\n\t\t\t      You Won Rs. 1 Crore ");
			printf("\n\n\n\t\t\t      Credit of Game Goes To\n\n\t        GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   \n\n\t\t\t   PROGRAMED BY: ANKUSH LOKHANDE.\n");
			printf("\n\n\n   More Info At:\n\t\tE - Mail : ankush13lokhande@gmail.com\n");
			printf("\t\tCont NO. : 887 115 22 19\t\t\t Thank - You ");
			}
			getch();
			goto main;

		case 2:
			textcolor(WHITE);
			gotoxy(35,12);
			cprintf(" Loading... ");
			gotoxy(27,14);
			for(i=0;i<=26;i++)
			{
			textcolor(DARKGRAY);
			cprintf("%c",ch);
			}
			gotoxy(27,14);
			for(i=0;i<=26;i++)
			{
			delay(50);
			textcolor(WHITE);
			cprintf("%c",ce);
			}
			textcolor(YELLOW);
			gotoxy(35,18);
			cprintf("Click Here...");
			getche();
			clrscr();
			textbackground(WHITE);
			textcolor(RED);
			gotoxy(2,1);
			cprintf(" Welcome User: %s  ",strupr(name));
			textbackground(BLACK);
			textcolor(YELLOW);
			gotoxy(67,1);
			cprintf(" H O L K A R ");
			gotoxy(29,5);
			cprintf("-------------------------");
			gotoxy(28,6);
			cprintf("|");
			gotoxy(31,6);
			cprintf("WELCOME IN KBC - 2017");
			gotoxy(54,6);
			cprintf("|");
			gotoxy(29,7);
			cprintf("-------------------------");
			gotoxy(31,13);
			cprintf("Credit of Game Goes To");
			gotoxy(13,15);
			cprintf("   GOVT. HOLKAR SCIENCE COLLEGE, INDORE (M.P.)   ");
			gotoxy(28,17);
			cprintf("PROGRAMED BY: ANKUSH LOKHANDE.");
			gotoxy(2,22);
			cprintf("More Info At:");
			gotoxy(5,23);
			cprintf("E - Mail : ankush13lokhande@gmail.com");
			gotoxy(5,24);
			cprintf("Cont NO. : 887 115 22 19");
			gotoxy(64,24);
			cprintf(" Thank - You ");
			getch();
			goto main;

		case 3:
			clrscr();
			gotoxy(31,13);
			cprintf("Thanks for Play   ");
			getch();
			exit();

		default:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Please Enter A Valid Choice\n\n\t\t\t\tRestart Game Again...");
			getch();
			goto main;
	}
	}
	}
	}
	getch();
}