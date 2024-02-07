#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>

#define MAX_MOVIE_LIST 10
#define MAX_STRING_LENGTH 256
int MovieCount=0;

typedef struct 
{
char *name;
char *director;
char *type;
int year;
}MovieClasser;

void MENU_Main(MovieClasser *moviePTR);
void MENU_Add_Movie(MovieClasser *moviePTR);
int namecheck(MovieClasser *moviePTR);
void MENU_Delete_Movie(MovieClasser *moviePTR);
void MENU_Show_List(MovieClasser *moviePTR);
void TOGGLE_Main(MovieClasser *moviePTR);
void MALLOC_EMPTY_LIST(MovieClasser *moviePTR);
void FREE_ALL_MEM(MovieClasser *moviePTR);
 

int main(int argc, char const *argv[])
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MovieClasser MovieList[MAX_MOVIE_LIST];
    MALLOC_EMPTY_LIST(MovieList);
    strcpy(MovieList[0].name,"Me is Gronk");
    strcpy(MovieList[0].director,"Gronk");
    strcpy(MovieList[0].type,"Documentary");
    MovieList[0].year = -12000;
    strcpy(MovieList[1].name,"Me found hot light");
    strcpy(MovieList[1].director,"Gronk");
    strcpy(MovieList[1].type,"Thriller");
    MovieList[1].year = -12000;
    strcpy(MovieList[2].name,"Hot light hurty! Oww!");
    strcpy(MovieList[2].director,"Gronk");
    strcpy(MovieList[2].type,"Horror");
    MovieList[2].year = -12000;

    MovieCount =3;




    MENU_Main(MovieList);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MALLOC_EMPTY_LIST(MovieClasser *moviePTR)
{
    for(int i = 0; i<MAX_MOVIE_LIST;i++)
        { 
            moviePTR[i].name=(char*)malloc(256*sizeof(char));
            moviePTR[i].director=(char*)malloc(256*sizeof(char));
            moviePTR[i].type=(char*)malloc(256*sizeof(char));
        }
    for(int i = 0; i<MAX_MOVIE_LIST;i++)
        {
            strcpy(moviePTR[i].name,"");
            strcpy(moviePTR[i].director,"");
            strcpy(moviePTR[i].type,"");
            moviePTR[i].year=0;
        }
}

void MENU_Main(MovieClasser *moviePTR)
{
    printf("===============================\n");
    printf("(1) Add a new movie          ||\n");
    printf("(2) Delete an existing movie ||\n");
    printf("(3) Show movie list          ||\n");
    printf("(4) Exit the program         ||\n");
    printf("===============================\n");
    int KEY=0;
    while(KEY==0)
    {
        printf("Enter the number of the action\n");
        if(scanf("%d",&KEY)!=1)
        {
            printf("Invalid input, try again\n");
            while(getchar()!='\n');
        }
        else
        {
            switch (KEY)
            {
                case 1:
                while(getchar()!='\n');
                MENU_Add_Movie(moviePTR);
                break;
                case 2:
                MENU_Delete_Movie(moviePTR);
                break;
                case 3:
                MENU_Show_List(moviePTR);
                break;
                case 4:
                //free memory flag
                printf("Quiting the program...\n");
                FREE_ALL_MEM(moviePTR);
                exit(0);
                break;
            
                default:
                printf("Invalid option\n");
                KEY = 0;
                break;
            }
        }
        
    }
}

void MENU_Show_List(MovieClasser *moviePTR)
{
    printf("===============================\n");
    for(int i=0;i<MovieCount;i++)
    {
        printf("Movie name : %s\n",moviePTR[i].name);
        printf("Movie directed by : %s\n",moviePTR[i].director);
        printf("Movie type : %s\n",moviePTR[i].type);
        printf("Movie released in : %d\n",moviePTR[i].year);
        printf("===============================\n");
    }
    TOGGLE_Main(moviePTR);
}

void TOGGLE_Main(MovieClasser *moviePTR)
{
    printf("===============================\n");
    printf("(1) Return to main menu      ||\n");
    printf("(2) Exit the program         ||\n");
    printf("===============================\n");

    int KEY=0;
    while(KEY==0)
    {
        printf("Enter the number of the action\n");
        if(scanf("%d",&KEY)!=1)
        {
            printf("Invalid input, try again\n");
            while(getchar()!='\n');
        }
        else
        {
            switch (KEY)
            {
                case 1:
                printf("Returning to main menu...\n");
                MENU_Main(moviePTR);
                break;
                case 2:
                printf("Quiting the program...\n");
                FREE_ALL_MEM(moviePTR);
                exit(0);
                break;
                default:
                printf("Invalid option\n");
                KEY = 0;
                break;
            }
        }
        
    }
    
}

void MENU_Delete_Movie(MovieClasser *moviePTR)
{
    if(MovieCount!=0)
    {
        printf("===============================\n");
        for(int i=0;i<MovieCount;i++)
        {   
            printf("Movie number : (%d)\n",i+1);
            printf("Movie name : %s\n",moviePTR[i].name);
            printf("Movie directed by : %s\n",moviePTR[i].director);
            printf("Movie type : %s\n",moviePTR[i].type);
            printf("Movie released in : %d\n",moviePTR[i].year);
            printf("===============================\n");
        }
        int KEY=0;
        while(KEY==0)
        {
            printf("Enter the number of the movie you want to delete.\n");
            if(scanf("%d",&KEY)!=1 || KEY > MovieCount)
            {
                printf("Invalid input, try again\n");
                KEY=0;
                while(getchar()!='\n');
            }
            else
            {
                for(int i = KEY-1 ; i<MovieCount-1;i++)
                {
                    strcpy(moviePTR[i].name,moviePTR[i+1].name);
                    strcpy(moviePTR[i].director,moviePTR[i+1].director);
                    strcpy(moviePTR[i].type,moviePTR[i+1].type);
                    moviePTR[i].year = moviePTR[i+1].year;
                }
                MovieCount--;

                strcpy(moviePTR[MovieCount].name,"");
                strcpy(moviePTR[MovieCount].director,"");
                strcpy(moviePTR[MovieCount].type,"");
                moviePTR[MovieCount].year = 0;
                
                printf("Succesfully deleted the movie\n");

                TOGGLE_Main(moviePTR);
            }
        }
    }
    else
    {
        printf("Insufficent amount of movies to delete!\n");
        TOGGLE_Main(moviePTR);
    }
}

int namecheck(MovieClasser *moviePTR)
{
     for(int i =0; i<MovieCount;i++)
        {
            if(strcmp(moviePTR[MovieCount].name,moviePTR[i].name)==0)
            {
                return 1;
                break;
            }
        }
    return 0;
}

void MENU_Add_Movie(MovieClasser *moviePTR)
{
    if(MovieCount>=MAX_MOVIE_LIST)
    {
        printf("No more space left in the movie list!\n");
        TOGGLE_Main(moviePTR);
    }
    else
    {
    while(1)
    {
        printf("Please enter the name of the movie\n");
        fgets(moviePTR[MovieCount].name,256,stdin);
        moviePTR[MovieCount].name[strcspn(moviePTR[MovieCount].name, "\n")] = 0;
        if(strlen(moviePTR[MovieCount].name)==0)
        {
            printf("Please enter a valid name\n");
        }
        else if(namecheck(moviePTR)==1)
        {
            printf("A movie of the same name already exists!\n");
        }
        else
        {
            while(1)
            {
                ////////////////
                printf("Please enter the director of the movie\n");
                fgets(moviePTR[MovieCount].director,256,stdin);
                moviePTR[MovieCount].director[strcspn(moviePTR[MovieCount].director, "\n")] = 0;
                if(strlen(moviePTR[MovieCount].director)==0)
                {
                    printf("Please enter a valid director\n");
                }
                else
                {
                    while(1)
                    {
                        printf("Please enter the genre of the movie\n");
                        fgets(moviePTR[MovieCount].type,256,stdin);
                        moviePTR[MovieCount].type[strcspn(moviePTR[MovieCount].type, "\n")] = 0;
                        if(strlen(moviePTR[MovieCount].type)==0)
                        {
                            printf("Please enter a valid genre\n");
                        }
                        else
                        {
                            while(1)
                            {
                                printf("Please enter the releasing year of the movie\n");
                                if(scanf("%d",&moviePTR[MovieCount].year)!=1)
                                {
                                    printf("Invalid year, try again\n");
                                    while(getchar()!='\n');
                                }
                                else
                                {
                                    printf("Movie succesfully saved!\n");
                                    MovieCount++;
                                    TOGGLE_Main(moviePTR);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}


void FREE_ALL_MEM(MovieClasser *moviePTR)
{
for(int i = 0; i<MAX_MOVIE_LIST;i++)
    { 
        free(moviePTR[i].name);
        free(moviePTR[i].director);
        free(moviePTR[i].type);
    }
}