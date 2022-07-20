#include <iostream>
#include <stdexcept>

double dangerous(double n)
{
  if(/* Not dangerous */n < 10)
  {
    return(n);
  }
  else
  {
    throw(std::runtime_error("Dangerous!\n"));
  }
}

int main()
{
  double value;

  do
  {
    std::cout << "Enter a valid value: ";
    std::cin >> value;
    try
    {
      std::cout << dangerous(value) << '\n';
    }
    catch(std::runtime_error& rte)
    {
      std::cout rte.what();
    }
  } while(dangerous(value) != value);

  return(0);
}
