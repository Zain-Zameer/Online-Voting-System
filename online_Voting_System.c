#include<stdio.h>
#include<unistd.h>
#include<string.h>

void straightline(){
     printf("------------------------------------------------------------------------------------------------------------------------------\n");
}

int main(){
    int party01Box = 0;
    int party02Box = 0;
    int party03Box = 0;
    int party04Box = 0;
    int party05Box = 0;
    int party06Box = 0;
    int party07Box = 0;
    int party08Box = 0;
    int party09Box = 0;
    int party10Box = 0;
    int party11Box = 0;
    int party12Box = 0;
    int party13Box = 0;
    int party14Box = 0;
    
    int select1;
    int select2;
    char yorn;
    int cnicno;
    int cnicNoAvailable[3] = {123,456,789};
    char locations[3][100] = {
            "rafeaam",
            "malir15",
            "jummagoth"
    };
    char location[10];
    char party01[] = "Pakistan Tehreek-e-Insaf";
    char party02[] = "Pakistan Muslim League (N)";
    char party03[] = "Pakistan Peoples Party";
    char party04[] = "Muttahida Qaumi Movement";
    char party05[] = "Muttahida Majlis-e-Amal";
    char party06[] = "Pakistan Muslim League (Q)";
    char party07[] = "Awami National Party";
    char party08[] = "Pashtunkhwa Milli Awami";
    char party09[] = "National Party";
    char party10[] = "Balochistan National Party";
    char party11[] = "Balochistan Awami Party";
    char party12[] = "Grand Democratic Alliance";
    char party13[] = "Awami Muslim League";
    char party14[] = "Jamhoori Wattan Party";
    char party15[] = "Balochistan National Party";


    printf("\n");
    int repeat = 1;
while (repeat)
{
    int select3;
    printf("1)Admin\n2)Citizen\n");
    printf("\n");
    printf("Select: ");
    scanf("%d",&select3);
    if(select3==2){
        printf("--------------------\n");
        printf("Select Your Language:\n");
        printf("--------------------\n");
        printf("1)English\n2)Urdu\n3)Pashto\n4)Sindhi");
        printf("\n");
        printf("\nNote: press 1 for English, press 2 for Urdu, press 3 for Punjabi, press 4 for Pashto, press 5 for Sindhi\n");
        printf("            -                    -                 -                    -                   -");
        printf("\n");
        printf("Select: ");
        scanf("%d",&select1);
        if(select1 == 1){
            printf("English Language Selected.\n");
            printf("\n");

            // Security CheckUp
            printf("Enter Your CNIC Number: ");
            scanf("%d", &cnicno);

            int found1 = 0;
            for (int i = 0; i < 3; i++) {
                if (cnicno == cnicNoAvailable[i]) {
                    found1 = 1;
                    break;
                    }
                }
                if(found1 == 1){
                    printf("Enter Your Area Name: ");
                    scanf("%s",location);
                    int found = 0;
                    for (int i = 0; i < 3; i++) {
                        if (strcmp(location, locations[i]) == 0) {
                            found = 1;
                            break;
                        }
                    }
                    printf("Checking..");
                    if(found == 1){
                        printf("Location Found!\n");
                        sleep(1);
                        printf("\n");
                        printf("Here we have table for all Political Parties.\n");
                        printf("\n");
                        printf("________________________________________________________________________________________________________________________________\n");
                        printf("        PARTY                    FOUNDED           POLITICAL POSITION         LEADER          NATIONAL ASSEMBLY      SENATE\n");
                        printf("______________________________|________________|______________________|______________________|____________________|_____________|\n");
                        printf("1-%s    |1996            |  Centre              |        Imran Khan    |         27/342     |      28/100|\n",party01);
                        straightline();
                        printf("2-%s  |1993            | Centre-right         |      Shehbaz Sharif  |         85/342     |      18/100|\n",party02);
                        straightline();
                        printf("3-%s      |1967            | Centre-left          |      Bilawal Bhutto  |         58/342     |      21/100|\n",party03);
                        straightline();
                        printf("4-%s    |2017            | Centre-left          |      Khalid Maqbool  |          7/342     |       3/100|\n",party04);
                        straightline();
                        printf("5-%s     |2002            | Right-Wing           |      Sirajul & Fazal |          1/342     |       1/100|\n",party05);
                        straightline();
                        printf("6-%s  |2002            | Centre-right         |      Shujaat Hussain |          5/342     |       1/100|\n",party06);
                        straightline();
                        printf("7-%s        |1986            | Centre-left          |      Asfandyar Wali  |         1/342      |      2/100|\n",party07);
                        straightline();
                        printf("8-%s     |1989            | Left-Wing            |     Mahmood Achakzai |         0/342      |      1/100|\n",party08);
                        straightline();
                        printf("9-%s              |2003            | Centre-left          |    Abdul Malik Baloch|         0/342      |      2/100|\n",party09);
                        straightline();
                        printf("10-%s |1996            | Left-Wing            |    Akhtar Mengal     |         4/342      |      1/100|\n",party10);
                        straightline();
                        printf("11-%s    |2018            | Centre               |    Abdul Quddus      |         5/342      |      12/100|\n",party11);
                        straightline();
                        printf("12-%s  |2018            | Centre               |  Sibghatullah Rashdi |         3/342      |      1/100|\n",party12);
                        straightline();
                        printf("13-%s        |2008            | Centre               |    Sheikh Rasheed    |         1/342      |      0/100|\n",party13);
                        straightline();
                        printf("14-%s      |1990            | -----                |    Shahzain Bugti    |         1/342      |      0/100|\n",party14);
                        straightline();
                        printf("\n");
                        printf("\n");
                        printf("!Only Numbers are allowed to tell!\n");
                        printf("\n");
                        printf("Select Your Party to vote: ");
                        scanf("%d",&select2);
                        printf("\n");
                        if(select2==1){
                            printf("%s Selected.\n",party01);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party01);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party01Box = party01Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("---------------------");
                            }
                        }
                            else if(select2==2){
                            printf("%s Selected.\n",party02);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party02);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party02Box = party02Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==3){
                            printf("%s Selected.\n",party03);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party03);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party03Box = party03Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==4){
                            printf("%s Selected.\n",party04);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party04);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party04Box = party04Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }   
                            else if(select2==5){
                            printf("%s Selected.\n",party05);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party05);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party05Box = party05Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==6){
                            printf("%s Selected.\n",party06);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party06);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party06Box = party06Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==7){
                            printf("%s Selected.\n",party07);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party07);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party07Box = party07Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==8){
                            printf("%s Selected.\n",party08);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party08);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party08Box = party08Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==9){
                            printf("%s Selected.\n",party09);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party09);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party09Box = party09Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==10){
                            printf("%s Selected.\n",party10);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party10);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party10Box = party10Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==11){
                            printf("%s Selected.\n",party11);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party11);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party11Box = party11Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }   
                            else if(select2==12){
                            printf("%s Selected.\n",party12);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party12);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party12Box = party12Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==13){
                            printf("%s Selected.\n",party13);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party13);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party13Box = party13Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                            else if(select2==14){
                            printf("%s Selected.\n",party14);
                            printf("\n");
                            printf("Do you want to vote %s, press (y) if you agree or (n) if you don't.\n",party14);
                            printf("Select: ");
                            scanf(" %c",&yorn);
                            if(yorn=='y'){
                                printf("Collecting your vote....");
                                sleep(2);
                                party14Box = party14Box+1;
                                printf("\n");
                                printf("Vote Added Successfully.");
                                printf("\n");
                            }
                            else{
                                printf("Ok Take Care Bye.\n\n");
                                printf("----------------------");
                            }
                        }
                    }
                    else{
                        printf("\nLocation Not Found...");
                    }
                    
                }
            
                else{
                    printf("\nNot Acceptable! Reporting now to 4545...\n");
                }
            
            }
    }
        sleep(2);
        straightline();
        printf("\n");
        printf("\n");
        straightline();
        printf("\n");

    if(select3==1){
        int username;
        char password[40];
        printf("\nAdmin Mode selected.\n");
        printf("\n");
        printf("Admin Username: ");
        scanf("%d",&username);
        printf("\n");
        printf("Admin Password: ");
        scanf("%s",password);
        printf("\n");
        if(username==56789 && strcmp(password,"pakistanzindabad")==0){
            int select4;
            printf("ACCESS GRANTED To The Database of voting system.\n");
            printf("\n");
            printf("Following parties took part in election: \n");
            printf("\n");
            printf("1)Pakistan Tehreek -e- Insaaf\n2)Pakistan Muslim League (N)\n3)Pakistan Peoples Party\n4)Muttahida Qaumi Movement\n5)Muttahida Majlis-e-Amal\n6)Pakistan Muslim League (Q)\n7)Awami National Party\n8)Pashtunkhwa Milli Awami\n9)National Party\n10)Balochistan National Party\n11)Balochistan Awami Party\n12)Grand Democratic Alliance\n13)Awami Muslim League\n14)Jamhoori Wattan Party\n");
            printf("\nSelect: ");   
            scanf("%d",&select4);
            if(select4==1){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party01Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==2){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party02Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==3){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party03Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==4){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party04Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==5){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party05Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==6){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party06Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==7){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party07Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==8){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party08Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==9){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party09Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==10){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party10Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==11){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party11Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==12){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party12Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==13){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party13Box);
                printf("-------");
                printf("\n");
            }
            else if(select4==14){
                printf("\n");
                printf("-------\n");
                printf("Total: %d votes.\n",party14Box);
                printf("-------");
                printf("\n");
            }
            else{
                printf("Invalid Command!...\n\n");
            }
        }
        else{
            printf("Reporting to the Admin Office..\n");
            sleep(3);
        }
    }
    straightline();
    printf("\n");
    printf("\n");

}
    return 0;
}