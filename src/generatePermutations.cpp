#include "generatePermutations.hh"

generatePermutations::generatePermutations(int lenghtList):
	_lenghtList(lenghtList),
	_numberPerm(0)
{
  _list.resize(lenghtList);
  int i = 1;
  for (auto &elem : _list) {
    elem = i;
    i += 1;
  }
  _index.resize(lenghtList);
  for (auto &elem : _index) {
    elem = 0;
  }
}

void generatePermutations::generateAll()
{
  int tmp;
  int swapPos;

  displayOne();
  for (auto i = 1 ; i < _lenghtList ;) {
    if (_index.at(i) < i) {
	swapPos = i % 2 * _index.at(i);
	tmp = _list.at(swapPos);
	_list.at(swapPos) = _list.at(i);
	_list.at(i) = tmp;
	displayOne();
	_index.at(i) += 1;
	i = 1;
    } else {
      _index[i] = 0;
      i += 1;
    }
  }
  std::cout << "Number permutations: " << _numberPerm << std::endl;
}

void generatePermutations::displayOne()
{
  _numberPerm += 1;
  for (auto &elem : _list) {
    std::cout << elem;
  }
  std::cout << std::endl;
}