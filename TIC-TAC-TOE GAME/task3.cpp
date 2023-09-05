#include <iostream>
#include <iomanip>
void board(char b[3][3]) {
    std::cout <<std::setw(70) << " " << b[0][0] << " | " << b[0][1] << " | " << b[0][2] << "\n";
    std::cout <<std::setw(81) << "---+---+---\n";
    std::cout <<std::setw(70) << " " << b[1][0] << " | " << b[1][1] << " | " << b[1][2] << "\n";
    std::cout <<std::setw(81) << "---+---+---\n";
    std::cout <<std::setw(70) << " " << b[2][0] << " | " << b[2][1] << " | " << b[2][2] << "\n";
}

int main() {
    int no,flag=0,choice,player=1,sum=0;
    std::string name1,name2;
    char a[3][3] = { {' ', ' ', ' '},
                     {' ', ' ', ' '},
                     {' ', ' ', ' '} };
    char b[3][3] = { {'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'} };

    std::cout<<"Enter the first player name :-";
    std::cin>>name1;
    std::cout<<"\n"<<name1<<" your symbol is :- X \n";
    std::cout<<"\n"<<"Enter the second player name:- ";
    std::cin>>name2;
    std::cout<<"\n"<<name2<<" your symbol is :- O\n\n";

    board(b);
    std::cout<<"\nRefer the above block numbers :-\n\n";

    board(a);
   
    while(1)
    {
         if(player % 2 != 0)
         {
            std::cout<<"\n"<<name1<<" your move :- \n";
         }
         else
         {
            std::cout<<"\n"<<name2<<" your move :- \n";
         }
         std::cout<<"\nEnter block no :-";
         std::cin>>no;
         switch(no)
        {
            case 1: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[0][0]!='X' && a[0][0]!='O')
                            {
                                if(player % 2 != 0)
                                {
                                     a[0][0]='X';
                                     player++;
                                }
                                else
                                {
                                    a[0][0]='O';
                                    player++;
                                }

                            }
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 2: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[0][1]!='X' && a[0][1]!='O')
                            {
                               if(player % 2 != 0)
                                {
                                     a[0][1]='X';
                                     player++;
                                }
                                else
                                {
                                    a[0][1]='O';
                                    player++;
                                }  
                            }               
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 3: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[0][2]!='X' && a[0][2]!='O')
                            {
                                if(player % 2 != 0)
                                {
                                     a[0][2]='X';
                                     player++;
                                }
                                else
                                {
                                    a[0][2]='O';
                                    player++;
                                }  
                            }    
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 4: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[1][0]!='X' && a[1][0]!='O')
                            {
                                if(player % 2 != 0)
                                {
                                     a[1][0]='X';
                                     player++;
                                }
                                else
                                {
                                    a[1][0]='O';
                                    player++;
                                }  
                            }  
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 5: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[1][1]!='X' && a[1][1]!='O')
                            {
                               if(player % 2 != 0)
                                {
                                     a[1][1]='X';
                                     player++;
                                }
                                else
                                {
                                    a[1][1]='O';
                                    player++;
                                }  
                            }  
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 6: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[1][2]!='X' && a[1][2]!='O')
                            {
                                if(player % 2 != 0)
                                {
                                     a[1][2]='X';
                                     player++;
                                }
                                else
                                {
                                    a[1][2]='O';
                                    player++;
                                }  
                            }
                        }
                    }
                    system("cls");
                     board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 7: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[2][0]!='X' && a[2][0]!='O')
                            {
                               if(player % 2 != 0)
                                {
                                     a[2][0]='X';
                                     player++;
                                }
                                else
                                {
                                    a[2][0]='O';
                                    player++;
                                }  
                            }
                        }
                    }
                    system("cls");
                     board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 8: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[2][1]!='X' && a[2][1]!='O')
                            {
                                if(player % 2 != 0)
                                {
                                     a[2][1]='X';
                                     player++;
                                }
                                else
                                {
                                    a[2][1]='O';
                                    player++;
                                }  
                            }
                        }
                    }
                    system("cls");
                     board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            case 9: for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[2][2]!='X' && a[2][2]!='O')
                            {
                               if(player % 2 != 0)
                                {
                                     a[2][2]='X';
                                     player++;
                                }
                                else
                                {
                                    a[2][2]='O';
                                    player++;
                                }  
                            }
                        }
                    }
                    system("cls");
                    board(b);
                    std::cout<<"\nRefer the above block numbers :-\n\n";
                    board(a);
                    break;
            default : std::cout<<"Please Enter Correct block number\n";
        }

        for(int i=0;i<3; i++)
        {
             sum=0;
            for(int j=0;j<3;j++)
            {
                 if(a[i][j]=='X')
                 {
                    sum++;
                 }
            }
            if(sum==3)
            {
                std::cout<<"\nCongratulation "<<name1<<" You won\n\n";
                flag++;
                break;
            }
        }

        for(int i=0;i<3; i++)
        {
            sum=0;
            for(int j=0;j<3;j++)
            {
                 if(a[i][j]=='O')
                 {
                    sum++;
                 }
            }
            if(sum==3)
            {
                std::cout<<"\nCongratulation "<<name2<<" You won\n\n";
                flag++;
                break;
            }
        }

        int x=0,o=0;
        for(int i=0;i<3; i++)
        {
            for(int j=0;j<3;j++)
            {
                 if(i==j)
                 {
                    if(a[i][j]=='X')
                    {
                        x++;
                    }
                    if(a[i][j]=='O')
                    {
                        o++;
                    }
                 }
            }
            if(x==3)
            {
                std::cout<<"\nCongratulation "<<name1<<" You won\n\n";
                flag++;
                break;
            }
            if(o==3)
            {
                std::cout<<"\nCongratulation "<<name2<<" You won\n\n";
                flag++;
                break;
            }
        }  
        if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
        {
            std::cout<<"\nCongratulation "<<name1<<" You won\n\n";
            flag++;
        }
        if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
        {
            std::cout<<"\nCongratulation "<<name2<<" You won\n\n";
            flag++;
        }
        if((a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][2]=='X' 
            && a[1][2]=='X' && a[2][2]=='X'))
        {
            std::cout<<"\nCongratulation "<<name1<<" You won\n\n";
            flag++;
        }
        if((a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O') || (a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O') || (a[0][2]=='O' 
            && a[1][2]=='O' && a[2][2]=='O'))
        {
            std::cout<<"\nCongratulation "<<name2<<" You won \n\n";
            flag++;
        }

        if((a[0][0]=='X' || a[0][0]=='O') && (a[0][1]=='X' || a[0][1]=='O') && (a[0][2]=='X' || a[0][2]=='O') && (a[1][0]=='X' || a[1][0]=='O')
             &&(a[1][1]=='X' || a[1][1]=='O') && (a[1][2]=='X' || a[1][2]=='O') &&(a[2][0]=='X' || a[2][0]=='O') &&(a[2][1]=='X' || a[2][1]=='O') 
             &&(a[2][2]=='X' || a[2][2]=='O'))
        {
            std::cout<<"Match Draw\n\n";
            flag++;
        }

        if(flag!=0)
        {
            std::cout<<"Do you want to play again if yes Enter 1 if no then Enter 0 :- ";
            std::cin>>choice;
            if(choice==1)
            {
                main();
            }
            else
            {
                exit(0);
            }
        }
    }
   
    return 0;
}