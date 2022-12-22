#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>  
#include <string.h>
bool isValid(char * s){
    char c, cc;
    int top=0;
    int len=strlen(s);
    char C[len+1];
    int curly=0;
    int paren=0;
    int sq=0;
    for (int i = 0; i < len; i++)
    {
        c= s[i];
        if(c=='('){
            C[++top]=c;
            paren++;
            
        }
        if(c=='{'){
            C[++top]=c;
            curly++;
            
        }
        if(c=='['){
            C[++top]=c;
            sq++;
            
        }
        if(top>=0 && (c=='}'||c==']'||c==')')){
            if(c==')'){
                cc= C[top];
                if(cc=='('){
                    top--;
                    paren--;
                }
                else
                    return false;
            }
            if(c=='}'){
                cc= C[top];
                if(cc=='{'){
                    top--;
                    curly--;
                }
                else
                    return false;
            }
            if(c==']'){
                cc= C[top];
                if(cc=='['){
                    top--;
                    sq--;
                }
                else
                    return false;
            }
        }
    }
    if(curly==0 && sq==0 && paren==0){
        return true;
    }
    else
        return false;

}

int main(){
    int x;
    bool result;
    scanf("%d", &x);
    char arr[x];
    scanf("%s", arr);
    // for (int i = 0; i < x; i++)
    // {
    //     // printf("%d", i);
    //     scanf("%s", &arr[i]);
    // }
    result= isValid(arr);
    printf("%i", result);
}