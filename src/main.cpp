#include <iostream>
#include "generatePermutations.hh"

int main(int ac, char **av)
{
  if (ac < 2 || ac > 4)
    {
      std::cout << "[ERROR] You need pass arguments: " << av[0]
		<< " <length of the list> <generator type>(optional) <no print all permutations>(optional)" << std::endl;
      std::cout << "generator type: 1 -> Heap's, 2 -> Lexicographical" << std::endl;
      return (1);
    }

  try
    {
      if (ac == 2) {
	  thca::generatePermutations(std::stoi(av[1])).generateAll();
	}
      else if (ac == 3) {
	  thca::generatePermutations(std::stoi(av[1]), std::stoi(av[2])).generateAll();
      } else if (ac == 4) {
	  thca::generatePermutations(std::stoi(av[1]), std::stoi(av[2]), std::stoi(av[3])).generateAll();
	}
    } catch (std::invalid_argument &e)
    {
      std::cout << "[ERROR] Argument(s) is not a number" << std::endl;
      return (1);
    }
  return (0);
}