#include<stdio.h>


int add(int a, int b){
//main함수에서 a와b에 값을 지정하였다면, 그 값은 add함수로 전달됩니다.
return a+b;
//전달된 값을 더한후 다시 main함수로 되돌립니다.

}

main(){
int b=0;
int a;
int i;
for(i=1;i<=5;i++){
//for함수로 사용하여 총 5번 넣을 수 있게 했습니다(조건식의 숫자를 바꿔
입금할 수 있는 횃수를 조정할 수 있습니다.) 
        printf("입금 할 금액 :");
        scanf("%d",&a);
        b = add(a,b);
//add함수에서 더한 값을 b에 다시 저장됩니다.
        printf("\n%d원 입금되었습니다. \n 현재 고객님의 계좌는 %d입니다\n",a,b);
//변수 a를 사용하여 얼마를 입금하였는지를 다시 상기시켜주었고, 변수 d는 지금까지 입금한
금액들의 합을 보여주며 계좌에 얼마가 있는지를 출력했습니다.
        
}

}

계좌에 원하는 돈만큼 총 5번을 입금할 수 있는 프로그램을 만들었습니다. 은행에 가서 카드입금했던것을 떠올려서 어떻게 간단하고 쉽게 입금한 금액과 총금액을 나타낼 수 있을까라는 생각을 하며 만들게 되었습니다. 이 프로그램에는 조건문, 반복문, 함수를 어렵지 않게, 그리고 실생활에 활용할 수 있는게 무엇일까를 가장 우선으로 생각하며 만들었습니다. 쉽고 간단하게 나타낸 이유는 만약 처음 코딩을 배우는 사람들에게 복잡하고 어려운 코드들만 보고 코딩이 어렵다고 생각할 수 있기도 하여, 간단한 코드들만으로도 활용할 수 있다는 것을 알려주고 싶었기 때문입니다.
