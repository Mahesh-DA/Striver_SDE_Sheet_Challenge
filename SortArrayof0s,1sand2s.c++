#include <bits/stdc++.h>
best Approach
void sort012(int *nums, int n)
{
   int a=0,i=0,b=n-1;
   while(nums[b]==2) b--;
   while(i<=b)
   {
      if(nums[i]==2)
      {
         int c=nums[b];
         nums[b--]=nums[i];
         nums[i]=c;
         while(nums[b]==2) b--;

      }
      if(nums[i]==0)
      {   
         int c=nums[a];
         nums[a++]=nums[i];
         nums[i]=c;
      }
      i++;
   }
}

First Idea
void sort012(int *nums, int n)
{
   int a=-1,i=0,b=-1;
   for(i=0;i<n;i++)
   {
      if(nums[i]==0)
      {
         if(a!=-1)
         {
            nums[i]=nums[a];
            nums[a]=0;
            if(b!=-1)
            {
               nums[a]=nums[b];
               nums[b]=0;
            }
            if(nums[a+1]==2)
               a++;
            else
               a=-1;
            if(nums[b+1]==1)
               b++;
            else
               b=-1;
         }
         else if(b!=-1)
         {
            nums[i]=nums[b];
            nums[b]=0;
            if(nums[b+1]==1)
               b++;
            else
               b=-1;
         }
      }
      else if(nums[i]==1)
      {   
         if(a!=-1)
         {
            nums[i]=nums[a];
            nums[a]=1;
            if(b==-1)
               b=a;
            if(nums[a+1]==2)
               a++;
            else
               a=-1;
         }
         if(b==-1)
            b=i;
      }
      else
      {
         if(a==-1)
         {
            a=i;
         }
      }
   }
}
