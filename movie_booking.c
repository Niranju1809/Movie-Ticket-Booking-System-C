


#include <wchar.h>
#include <locale.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct Cinema{

    char location[50];
    char theatre[50];
    char movies[50];
    char date[50];
    char timings[50];
    char seats[50];
    char amount[50];
    char snacks[50];

}c;

const char locations[6][50]={"SALEM","KOVAI","ERODE","THENI","KARUR"};

const char s_theatres[3][50]={"   ARRS   ","   ROX    ","  ASCARS  "};
const char k_theatres[3][50]={" BROADWAY "," KAUVERY  ","  FUNMALL "};
const char e_theatres[3][50]={"   VSP    "," SRISAKTHI"," MAHARAJA "};
const char r_theatres[3][50]={" RADIANCE "," GOPURAM  ","BIGCINEMAS"};
const char t_theatres[3][50]={"    LA    ","   JAYA   ","  MARIYAM "};

const char arrs_movies[7][50]  ={"  SACHEIN   ","    GBU     ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char rox_movies[7][50]   ={"  SACHEIN   ","    GBU     ","     VDS     ","    U     ","   U/A    ","    U/A    "};
const char ascars_movies[7][50]={"    GBU     ","  TENHOURS  ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char b_movies[7][50]     ={"  SACHEIN   ","    GBU     ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char kau_movies[7][50]   ={"  SACHEIN   ","    GBU     ","     VDS     ","    U     ","   U/A    ","    U/A    "};
const char fun_movies[7][50]   ={"    GBU     ","  TENHOURS  ","    RETRO    ","    U     ","   U/A    ","    U/A    "};

const char rad_movies[7][50]   ={"  SACHEIN   ","    GBU     ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char gop_movies[7][50]   ={"  SACHEIN   ","    GBU     ","     VDS     ","    U     ","   U/A    ","    U/A    "};
const char big_movies[7][50]   ={"    GBU     ","  TENHOURS  ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char vsp_movies[7][50]   ={"  SACHEIN   ","    GBU     ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char sri_movies[7][50]   ={"  SACHEIN   ","    GBU     ","     VDS     ","    U     ","   U/A    ","    U/A    "};
const char mah_movies[7][50]   ={"    GBU     ","  TENHOURS  ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char la_movies[7][50]    ={"  SACHEIN   ","    GBU     ","    RETRO    ","    U     ","   U/A    ","    U/A    "};
const char jay_movies[7][50]   ={"  SACHEIN   ","    GBU     ","     VDS     ","    U     ","   U/A    ","    U/A    "};
const char mari_movies[7][50]  ={"    GBU     ","  TENHOURS  ","    RETRO    ","    U     ","   U/A    ","    U/A    "};


const char date[3][50]={"05-05-2025","06-05-2025","07-05-2025","08-05-2025"};



const char timings[5][50]={" 9.00 AM","1.00 PM"," 4.00 PM"," 7.00 PM"," 9.00 PM"};

const char seats[1000][1000]={"\n","╭───────────────────────────────────────────────────────────────╮\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t"," ","  ","1","2","3","   ","4","5","6","7","   ","8","9","10","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","A","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","B","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","C","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","D","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","E","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","F","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","G","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","H","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","I","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","J","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t\t╰------------------------------------╯\t\t  |\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "╰───────────────────────────────────────────────────────────────╯\n"};


const char amount[3][100]={"First class = 200","Second class = 180","Third class = 60"};

const char snacks[7][100]={"Popcorn 100","Coca cola 40","Puffs 50","Popcorn&Puffs 150","Popcorn&Cocacola 140","Cocacola&Puffs 90"};

int main(){

    system("chcp 65001");
    char name[50];
    char mobileno[10];

    printf("ENTER YOUR NAME:");
    scanf("%s",&name);

    phone:
    printf("ENTER YOUR PHONE NUMBER:");
    scanf("%s",&mobileno);
    if(strlen(mobileno)>10||strlen(mobileno)<10){
        printf("INVALID NUMBER\n");
        goto phone;
    }

    char location[50];
    printf("\n\n\t\t**\tBook My Show - Clone\t**\n");

    location:
    printf("\n\t\t\t _LOCATION_ \n");
    printf("\n╭-------╮\t\t╭-------╮\t\t╭-------╮\n");

    for(int i=0;i<3;i++){
        printf("| %s | \t\t",locations[i]);
    }
   printf("\n╰-------╯\t\t╰-------╯\t\t╰-------╯\n");

    printf("\n\n");
    printf("\t╭-------╮\t\t\t╭-------╮\n");

    for(int i=3;i<5;i++){
        printf("\t| %s | \t\t",locations[i]);
    }
    printf("\n\t╰-------╯\t\t\t╰-------╯\n");




    printf("\n\n");
    printf("Select the location:");
    scanf("%s",&c.location);

        printf("\n\t\t\t_THEATRES_\n\n");
      theatres:
        if(strcmp(c.location,"Salem")==0){
                 printf("╭----------╮\t\t╭----------╮\t\t╭----------╮\n");
                for(int i=0;i<3;i++){
                    printf("|%s|\t\t",s_theatres[i]);
                }
                 printf("\n╰----------╯\t\t╰----------╯\t\t╰----------╯\n");
           }else if(strcmp(c.location,"Kovai")==0){
                printf("╭----------╮\t\t╭----------╮\t\t╭----------╮\n");
                for(int i=0;i<3;i++){
                    printf("|%s|\t\t",k_theatres[i]);
                }
                 printf("\n╰----------╯\t\t╰----------╯\t\t╰----------╯\n");

           }else if(strcmp(c.location,"Theni")==0){
                printf("╭----------╮\t\t╭----------╮\t\t╭----------╮\n");
                for(int i=0;i<3;i++){
                    printf("|%s|\t\t",t_theatres[i]);
                }
                 printf("\n╰----------╯\t\t╰----------╯\t\t╰----------╯\n");
           }else if(strcmp(c.location,"Erode")==0){
                printf("╭----------╮\t\t╭----------╮\t\t╭----------╮\n");
                for(int i=0;i<3;i++){
                    printf("|%s|\t\t",e_theatres[i]);
                }
                 printf("\n╰----------╯\t\t╰----------╯\t\t╰----------╯\n");
           }else if(strcmp(c.location,"Karur")==0){
                printf("╭----------╮\t\t╭----------╮\t\t╭----------╮\n");
                for(int i=0;i<3;i++){
                    printf("|%s|\t\t",r_theatres[i]);

                }
            printf("\n╰----------╯\t\t╰----------╯\t\t╰----------╯\n");

           printf("\n\n");

           }else{
                printf("INVALID LOCATION\n\n");
                goto location;
            }

           printf("Select the Theatre:");
           scanf("%s",&c.theatre);


          printf("\n\t\t\t_MOVIES_\n\n");
       movies:
           if(strcmp(c.theatre,"Arrs")==0){
                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",arrs_movies[i]);
                }
                printf("\n");
                for(int i=3;i<6;i++){
                    printf("| %s | \t",arrs_movies[i]);
                }
                 printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Rox")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",rox_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",rox_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Ascars")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",ascars_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",ascars_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Broadway")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",b_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",b_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Kauvery")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",kau_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",kau_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Funmall")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",fun_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",fun_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Bigcinemas")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",big_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",big_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Radiance")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",rad_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",rad_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Gopuram")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",gop_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",gop_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Vsp")==0){
                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",vsp_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",vsp_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Srisakthi")==0){
                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",sri_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",sri_movies[i]);
               }
    printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Maharaja")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",mah_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",mah_movies[i]);
               }
    printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"La")==0){

    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",la_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",la_movies[i]);
               }
                printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Jaya")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",jay_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                    printf("| %s | \t",jay_movies[i]);
               }
    printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");
           }else if(strcmp(c.theatre,"Mariyam")==0){

                    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

                for(int i=0;i<3;i++){
                    printf("|%s|\t",mari_movies[i]);
                }
                    printf("\n");
               for(int i=3;i<6;i++){
                     printf("| %s |\t",mari_movies[i]);
                }
    printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    printf("╰------------╯\t╰------------╯\t╰-------------╯\n");

          } else{
               printf("INVALID THEATRE\n\n");
               goto theatres;
           }

    printf("\n Select the Movies:");
    scanf("%s",&c.movies);

    printf("\n\n");

    printf("\t\t__ AVAILABLE DATES__\n\n");
    date:
    for(int i=0;i<6;i++){
        printf(" %s \t\t",date[i]);
    }
    printf("\n\nSelect the date:");
    scanf("%s",&c.date);

     printf("\n\n");

         printf("\t\t\t_TIMINGS_\n\n");
         timings:
        printf("╭----------╮\t\t╭---------╮\t\t╭----------╮\n");

        for(int i=0;i<3;i++){
        printf("| %s |\t\t",timings[i]);
    }
        printf("\n╰----------╯\t\t╰---------╯\t\t╰----------╯\n");


    printf("\n\n");
        printf("\t╭----------╮\t\t\t╭----------╮\n");

     for(int i=3;i<5;i++){
        printf("\t| %s |\t\t",timings[i]);
    }
    printf("\n\t╰----------╯\t\t\t╰----------╯\n");
    printf("\n\n Select the Timing:");
    scanf("%s",&c.timings);

    printf("\n\n");

   seatclass:
    printf("\n\t\t\t\t_SEAT CLASS_\n\n");
    for(int i=0;i<3;i++){
    printf("%s\t\t",amount[i]);
    }
    printf("\n\n");
    printf("\nSelect seat class:");
    scanf("%s", &c.amount);

   int ticket_cost=0;

     if(strcmp(c.amount,"Firstclass")==0){
       ticket_cost=200;
    }else if(strcmp(c.amount,"Secondclass")==0){
       ticket_cost=180;
    }else if(strcmp(c.amount,"Thirdclass")==0){
        ticket_cost=60;
    }else{
        printf("Invalid seat class");
        goto seatclass;
    }


        printf("\n\n");

         printf("\t\t\t_AVAILABLE SEATS_\n");
        for(int i=0;i<198;i++){
        printf("%s  ",seats[i]);
    }
    if(strcmp(c.amount,"Firstclass")==0){
        printf("YOU ARE ABLE TO SELECT A & B & C ROWS\n ");
    }else if(strcmp(c.amount,"Secondclass")==0){
        printf("YOU ARE ABLE TO SELECT D & E & F & G & H ROWS\n ");
    }else if(strcmp(c.amount,"Thirdclass")==0){
        printf("YOU ARE ABLE TO SELECT I & J\n ");
    }
    seats:
        printf("\nSelect the Seats:");


        while (getchar() != '\n');

        fgets(c.seats, sizeof(c.seats), stdin);

    //    if (strcmp(c.amount, "Firstclass") == 0) {
    //    if (c.seats != 'A1' && c.seats != 'B1' && c.seats!= 'C1'&&
    //         c.seats != 'A2' && c.seats != 'B2' && c.seats!= 'C2'&&
    //         c.seats != 'A3' && c.seats != 'B3' && c.seats!= 'C3'&&
    //         c.seats != 'A4' && c.seats != 'B4' && c.seats!= 'C4'&&
    //         c.seats != 'A5' && c.seats != 'B5' && c.seats!= 'C5'&&
    //         c.seats != 'A6' && c.seats != 'B6' && c.seats!= 'C6'&&
    //          c.seats != 'A7' && c.seats != 'B7' && c.seats!= 'C7'&&
    //         c.seats != 'A8' && c.seats != 'B8' && c.seats!= 'C8'&&
    //          c.seats != 'A9' && c.seats != 'B9' && c.seats!= 'C9'&&
    //          c.seats != 'A10' && c.seats != 'B10' && c.seats!= 'C10'){
    //        printf("Invalid seat for Firstclass. \n");
    //        goto seats;


     //   }}



   printf("\n\t\t\t\t\t\t_SNACKS_\n");

        printf("╭-------------╮\t\t\t╭--------------╮\t\t\t╭----------╮\n");

        for(int i=0;i<3;i++){
        printf("| %s |\t\t\t",snacks[i]);
    }
        printf("\n╰-------------╯\t\t\t╰--------------╯\t\t\t╰----------╯\n");

        printf("\n\n");
        printf("╭-------------------╮\t\t╭----------------------╮\t\t╭-------------------╮\n");

        for(int i=3;i<6;i++){
        printf("| %s |\t\t",snacks[i]);
    }
        printf("\n╰-------------------╯\t\t╰----------------------╯\t\t╰-------------------╯\n");
     printf("\n\n\t\t\t\t  *SKIP*");
     printf("\n\n");
     printf("Select the Snacks:");
    scanf("%s",&c.snacks);
    int snacks_amount=0;

    if(strcmp(c.snacks,"Popcorn")==0){
        snacks_amount=100;
    }else if(strcmp(c.snacks,"Cocacola")==0){
        snacks_amount=40;
    }else if(strcmp(c.snacks,"Puffs")==0){
        snacks_amount=50;
    }else if(strcmp(c.snacks,"Popcorn&Puffs")==0){
        snacks_amount=150;
    }else if(strcmp(c.snacks,"Popcorn&Cocacola")==0){
        snacks_amount=140;
    }else if(strcmp(c.snacks,"Cocacola&Puffs")==0){
        snacks_amount=90;
    }else if(strcmp(c.snacks,"skip")==0){
        snacks_amount=0;
        goto confirmation;
    }
    printf("\n\n");
    printf("\n\t\t\t\t\t__CONFIRMATION__\n");
char confirmation[10];
confirmation:
printf("ARE YOU SURE ABOUT THIS TICKET BOOKING?\n");
printf("~~PLEASE ENTER CONFIRM TO GET YOUR TICKET\n");
printf("~~TO CANCEL ENTER EXIT\n");

scanf("%9s",&confirmation);

   if(strcmp(confirmation,"confirm")==0){
        printf("YOUR BOOKING IS CONFIRMED!!!!\n");
    goto ratings;
   }else if(strcmp(confirmation,"Confirm")==0){
        printf("YOUR BOOKING IS CONFIRMED!!!!\n");
    goto ratings;
   }else{
     printf("YOUR BOOKING IS NOT PLACED.THANK YOU!!!!");
     return 0;
   }
     int rating;
     ratings:
    printf("Rate your experience (1 to 5): ");
    scanf("%d", &rating);
    printf("Thanks for rating us %d stars!!!!\n", rating);
    printf("\n\n");

printf("╭─────────────────────────────────────────────────╮\n");
    printf("| Book My Show\t\t\t\t%s \t  |\n",c.theatre);
    printf("|\t\t\t\t\t%s \t  |\n",c.location);
    printf("|-------------------------------------------------|\n");
    printf("| \t\t\t\t\t\t  |\n");
    printf("| Booking ID: 81297 \t\t      %s  |\n",c.date);
    printf("| Paytm Order ID: 19273456 \t\t %s   |\n",c.timings);
    printf("|\t\t\t\t\t\t  | \n");
    printf("| MOVIE  :%s\t\t\t\t\t  |\n",c.movies);
    printf("| SEAT NO:%s\t\t\t\t|\n",c.seats);
    printf("|\t\t\t\t\t\t  | \n");

    int ticket_count=strlen(c.seats)/3;
    int ticket_amount=ticket_cost*ticket_count;
    float cgst =(float)0.09*ticket_amount;
    float sgst =(float)0.09*ticket_amount;
    float total_amount= ticket_amount+cgst+sgst+snacks_amount;

    printf("| \tTicket Amount : %d\t\t\t  |\n",ticket_amount);
    printf("| \tSnacks        : %d\t\t\t  |\n",snacks_amount);
    printf("| \tcgst          : %f\t\t  |\n",cgst);
    printf("| \tsgst          : %f\t\t  |\n",sgst);
    printf("|\t\t\t\t\t\t  | \n");
    printf("| \tTotal Amount  : %f\t\t  |\n",total_amount);
    printf("|\t\t\t\t\t\t  | \n");

    printf("|─────────────────────────────────────────────────|\n");
    printf("|Important Notes:\t\t\t\t  |\n");
    printf("|\t\t\t\t\t\t  |\n");
    printf("|\t\t\t\t\t\t  |\n");
printf("|~~Tickets & food once ordered cannot be exchanged|\n|  cancelled or refunded.        \t\t  |\n");
printf("|~~Children aged 3 years and above will require a |\n|  separate ticket. \t        \t\t  |\n");
printf("|~~Please check the suitability of the movie as\t  |\n|  per the Censor Board rating.       \t\t  |\n|\t\t\t\t\t\t  |\n");
printf("|`U: Unrestricted Public Exhibition throughout    |\n|    India, suitable for all age groups\t\t  |\n");
printf("|`A: Viewing restricted to adults above 18 \t  |\n|    years only\t\t\t\t\t  |\n");
printf("|`U/A: Unrestricted public exhibition with\t  |\n|      parental guidance for children below age 12|\n");


printf("╰─────────────────────────────────────────────────╯\n");


FILE *ptr;


ptr=fopen("Movie_ticket_bill.txt","w");
fprintf(ptr,"╭─────────────────────────────────────────────────╮\n");
    fprintf(ptr,"| Book My Show\t\t\t\t%s \t  |\n",c.theatre);
    fprintf(ptr,"|\t\t\t\t\t%s \t  |\n",c.location);
    fprintf(ptr,"|-------------------------------------------------|\n");
    fprintf(ptr,"| \t\t\t\t\t\t  |\n");
    fprintf(ptr,"| Booking ID: 81297 \t\t      %s  |\n",c.date);
    fprintf(ptr,"| Paytm Order ID: 19273456 \t\t %s   |\n",c.timings);
    fprintf(ptr,"|\t\t\t\t\t\t  | \n");
    fprintf(ptr,"| MOVIE  :%s\t\t\t\t          |\n",c.movies);
    fprintf(ptr,"| SEAT NO:%s\t\t\t\t  |\n",c.seats);
    fprintf(ptr,"|\t\t\t\t\t\t\t  | \n");



    fprintf(ptr,"| \tTicket Amount : %d\t\t\t  |\n",ticket_amount);
    fprintf(ptr,"| \tSnacks        : %d\t\t\t  |\n",snacks_amount);
    fprintf(ptr,"| \tcgst          : %f\t\t  |\n",cgst);
    fprintf(ptr,"| \tsgst          : %f\t\t  |\n",sgst);
    fprintf(ptr,"|\t\t\t\t\t\t  | \n");
    fprintf(ptr,"| \tTotal Amount  : %f\t\t  |\n",total_amount);
    fprintf(ptr,"|\t\t\t\t\t\t  | \n");

   fprintf(ptr,"|-------------------------------------------------|\n");
   fprintf(ptr,"|Important Notes:\t\t\t\t  |\n");
   fprintf(ptr,"|\t\t\t\t\t\t  |\n");
   fprintf(ptr,"|\t\t\t\t\t\t  |\n");
 fprintf(ptr,"|~~Tickets & food once ordered cannot be exchanged|\n|  cancelled or refunded.        \t\t  |\n");
 fprintf(ptr,"|~~Children aged 3 years and above will require a |\n|  separate ticket.       \t\t\t  |\n");
 fprintf(ptr,"|~~Please check the suitability of the movie as\t  |\n|  per the Censor Board rating.      \t\t  |\n|\t\t\t\t\t\t  |\n");
 fprintf(ptr,"|`U: Unrestricted Public Exhibition throughout    |\n|   India, suitable for all age groups\t\t |\n");
 fprintf(ptr,"|`A: Viewing restricted to adults above 18 \t  |\n|    years only\t\t\t\t\t |\n");
 fprintf(ptr,"|`U/A: Unrestricted public exhibition with\t  |\n|    parental guidance for children below age 12\t |\n");



  fprintf(ptr,"╰─────────────────────────────────────────────────╯\n");





fclose(ptr);
printf("\t**Bill Generated Success fully**\n");
}
