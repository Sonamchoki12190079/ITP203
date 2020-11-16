#include <stdio.h>
int main(){
	float CA=10,SE=10,Total;
// printf("Enter your CA marks:\n");
// scanf("%f",&CA);
// printf("Enter your SE marks:\n");
// scanf("%f",&SE);
	Total=CA+SE;
	if (Total>=50){ //Check for Passing
	if((CA>=20 && CA<=50) && (SE>=20 && SE<=50)) //CA and SE both Passed
	{
		printf("The student has passed in mathematices with a Total Marks: %.2f \n", Total );
	}
	if ((CA>=20 && CA<=50) && (SE<20 && SE>=0)) //CA Passed but SE Failed
	{
		printf("Passed in CA but Failed in SE, hence the student has FAILED, although your Total Marks is: %.2f \n", Total);
	}
	if ((CA<20 && CA>=0) && (SE>=20 && SE <= 50)) //CA Failed but SE Passed
	{
		printf("Failed in CA but Passed in SE, hence the student has FAILED, although your Total Marks is: %.2f \n", Total);
	}
	if (CA>50) //CA Marks should not exceed 50
	{
		printf("Hey Fool! Your CA should not exceed 50 Marks! Your CA was: %.2f \n",CA);
	}
	if (SE>50) //SE Marks should not exceed 50{
		printf("\nHey Fool! Your SE should not exceed 50 Marks! Your SE was: %.2f \n",SE);
	}
}
else{ 
//Check for Failing and other Negative Marking
	if (CA<0) //CA has to be Non-Negative
	{
		printf("Hey Fool Your CA should NOT be a Negative Mark! It was: %.2f \n", CA);
	}
	if (SE<0) //SE has to be Non-Negative
	{
		printf("Hey Fool Your SE should NOT be a Negative Mark! It was: %.2f \n", SE);
	}
	if (CA>0 && SE>0) //CA and SE both Positive but Less Than 50. The student fails
	{
		printf("student has failed in mathematices as the Total Mark is Less Than 50 i.e: %.2f\n", Total);
	}
	return 0;
}

