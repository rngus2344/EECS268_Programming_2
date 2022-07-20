#include <iostream>

void reverseArr(double arr[], int size)
{
  if(size<=0)
  {
    return;
  }
  else
  {
    double temp;
    int i=0;
    temp=arr[i];
    arr[i]=arr[size-1];
    arr[size-1]=temp;
    reverseArr(arr+1, size-2);
  }
}

int main()
{
  int size=5;
  double nums[] = { 1, 2, 3, 4, 5 };
  std::cout << nums[0] << ", " << nums[1] << ", " << nums[2] << ", ";
  std::cout << nums[3] << ", " << nums[4] << '\n';

  reverseArr(nums, size);

  std::cout << nums[0] << ", " << nums[1] << ", " << nums[2] << ", ";
  std::cout << nums[3] << ", " << nums[4] << '\n';
  return(0);
}
