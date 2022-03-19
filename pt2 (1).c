#include <stdio.h>
int cost[6];
int strength[6];

int mpa(int*,int,int,int);
int main()
{
    
    int budget, i;
    scanf("%d",&budget);
    int used[6];
    for(i=0;i<6;i++){
    	scanf(" %d %d",&cost[i],&strength[i]);
    	used[i]=0;
	}
    printf("%d\n",mpa(used,1,0,budget));
    

    return 0;
}
int max(int a1,int a2, int a3,int a4,int a5,int a6){
	int buyuk=0;
	if (a1>buyuk){buyuk=a1;
	}
	if (a2>buyuk){buyuk=a2;
	}
	
	if (a3>buyuk){
	
	buyuk=a3;
	}
	if (a4>buyuk)
	{
	buyuk=a4;
	}
	if (a5>buyuk){buyuk=a5;
	}
	if (a6>buyuk){buyuk=a6;
	}
	return buyuk;
}

int mpa(int used[6],int canpay, int reward, int budget){
	if(budget==0&&canpay){
		return 0;
	}
	if(!canpay){
		return -reward;
	}
	else{
		int maxes[6];
		int buyuk = -1;
		int use_now=0;
		for(int i=0;i<6;i++){
			if(!used[i]){
				int used_new[6];
				for(int j=0;j<6;j++){used_new[j]=used[j];}
				used_new[i]=1;
				maxes[i]= strength[i]+mpa(used_new,budget >= cost[i],strength[i],budget-cost[i]);
				if(maxes[i]>buyuk){
					buyuk = maxes[i];
				}
			}	
			
		}
		return buyuk;
	}
	
}
