#include <iostream>
#include "generatePermutations.hh"

int	main(int ac, char **av) {
  if (ac != 2) {
    std::cout << "[ERROR] You need pass arguments: " << av[0] << " <length of the list>" << std::endl;
    return (1);
  }

  try {
      auto generator = generatePermutations(std::stoi(av[1]));
      generator.generateAll();
  } catch (std::invalid_argument &e) {
    std::cout << "[ERROR] Lenght of the list is not a number" << std::endl;
    return (1);
  }
  return (0);
}