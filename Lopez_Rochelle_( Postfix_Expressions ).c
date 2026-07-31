#include <stdio.h>

int stack[10];
    int top=-1;
    
    void push(int value)
    {
        stack[++top]=value;
    }
    
    int pop()
    {
        return stack[top--];
    }
    
    int main ()
    {
        int choice;
        char again;
        
        do
        {
            top =-1;
            
            printf("\n====================\n");
            printf("SNACK STAND POSTFIX CALCULATOR\n");
            printf("\n====================\n");
            printf("[1]Hotdog Combo\n");
            printf("[2]Family Pizza Deal\n");
            printf("[3]Ice Cream Pack\n");
            printf("[4]Burger Duo\n");
            printf("[5]Exit\n");
            
            printf("\nEnter Your Choice:");
            
            scanf("%d", &choice);
            
            switch(choice)
            {
                case 1:
                {
                    int a, b, c, result;
                
                printf("\n--Hotdog Combo--\n");
                printf("Postfix Expression:74+3+\n");
                
                push(7);
                push(4);

                b=pop();
                a=pop();
                result=a+b;
                push(result);
                
                
                push(3);

                b=pop();
                a=pop();
                result=a+b;
                push(result);
                
                printf("Result:%d\n",pop());
                break;
                }
                
                case 2:
                {
                    int a, b, c, result;
                    
                    printf("\n--Family Pizza Deal--\n");
                    printf("Postfix Expression:75+3+1-\n");
                    
                    push(7);
                    push(5);

                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    
                    push(3);

                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    push(1);
                    
                    b=pop();
                    a=pop();
                    result=a-b;
                    push(result);
                    
                    printf("Result:%d\n",pop());
                    break;
                }
                case 3:
                {
                    int a, b, c, result;
                    
                    printf("\n--Ice Cream Pack--\n");
                    printf("Postfix Expression:24+1+2-\n");
                    
                    push(2);
                    push(4);

                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    
                    push(1);

                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    push(2);

                    b=pop();
                    a=pop();
                    result=a-b;
                    push(result);
                    
                    printf("Result:%d\n",pop());
                    break;
                }
                
                case 4:
                {
                    int a, b, c, result;
                    
                    printf("\n--Burger Duo--\n");
                    printf("Postfix Expression:84+3+1-\n");
                    
                    push(8);
                    push(4);
                    
                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    
                    push(3);

                    b=pop();
                    a=pop();
                    result=a+b;
                    push(result);
                    
                    push(1);

                    b=pop();
                    a=pop();
                    result=a-b;
                    push(result);
                    
                    printf("Result:%d\n",pop());
                    break;
                }
                
                case 5:
                {
                    printf("\nThank You!\n");
                    
                    return 0;
                }
                
                default:
                {
                    printf("\nInvalid Choice!\n");
                }
            }
                
                printf("\nAnother Transaction? (Y/N):\n");
                scanf(" %c",&again);
                
            } while(again=='Y'||again=='y');
            
            return 0;
            
        }
