/*Currency Converter Program*/
#include<stdio.h>
#include<math.h>
int main()
{
	float amount;
	float rupee,dollar,pound,euro,dirham;
	float won,yen,yuan,lira,rubie;
	int currency;
	printf("Hey User!This Currency Converter can convert\nIndian currency (rupees) into currencies of few
 other countries.\n");
	printf("\n----------------------------------------------\n\n");
	printf("Select your choice from below:\n");
	printf("Press 1 for INR to US Dollars\n");
	printf("Press 2 for INR to Pounds\n");
	printf("Press 3 for INR to Euros\n");
	printf("Press 4 for INR to Dirhams or AED\n");
	printf("Press 5 for INR to Wons\n");
	printf("Press 6 for INR to Yen\n");
    printf("Press 7 for INR to Rubie\n");
	printf("Press 8 for INR to Chinese Yuan\n");
	printf("Press 9 for INR to Lira\n");
	printf("Enter any number from 1 to 9:\t");
	scanf("%d",&currency);
	if(currency<=0 || currency>=9)
	{
	  printf("Choose valid option!!\n ");
    }
    else
    {
	  printf("Enter the amount you want to convert:\t");
	  scanf("%f",&amount);
	  if(amount!=0 && isdigit(amount))
	  {
	    printf("-----------------------------------------------\n");
	    switch(currency)
	    {  
		    case 1:
		     	dollar=amount*0.013;
			    printf("Country Name(s):USA\n");
			    printf("%f rupees = %f USD\n",amount,dollar);
			    break;
			case 2:
			    pound=amount*0.010;
				printf("Country Name(s):UK\n");
				printf("%f rupees = %f pounds\n",amount,pound);
				break;
		  	case 3:
				euro=amount*0.012;
				printf("Country Name(s):France,Italy,Germany,etc.,.\n");
				printf("%f rupees = %f euros\n");
				break;
		  	case 4:
				dirham=amount*0.046;
				printf("Country Name(s):UAE\n");
				printf("%f rupees = %f AED\n");
				break;
		  	case 5:
				won=amount*16.45;
				printf("Country Name(s):South Korea\n");
				printf("%f rupees = %f wons\n");
				break;
            case 6:
				yen=amount*1.73;
				printf("Country Name(s):Japan\n");
				printf("%f rupees = %f yens\n");
				break;
		    case 7:
				rubie=amount*0.72;
				printf("Country Name(s):Russia\n");
				printf("%f rupees = %f rubie\n");
				break;
            case 8:
			    yuan=amount*0.085;
				printf("Country Name(s):China\n");
				printf("%f rupees = %f yuans\n");
				break;
		    case 9:
				lira=amount*0.22;
				printf("Country Name(s):Turkey\n");
				printf("%f rupees = %f lira\n");
		        break;
		    default:
				printf(“Error Occurred ! Please try again!!\n");
				break;
		}
    }
    else
    {
    printf("Enter valid amount!\n");
    }
  }
  return 0;
}
    

