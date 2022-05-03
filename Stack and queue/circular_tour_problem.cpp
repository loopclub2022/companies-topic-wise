/* question link -https://practice.geeksforgeeks.org/problems/circular-tour/1#*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0;
       int end=1;
       int cost=p[start].petrol-p[start].distance;
       while(start!=end or cost<0)
       {
           if(cost<0)
           {
               if(end<=start)
               {
                   return -1;
               }
               start=end;
               cost=0;
           }
           cost+=p[end].petrol-p[end].distance;
           end=(end+1)%n;
       }
       return start;
    }
};