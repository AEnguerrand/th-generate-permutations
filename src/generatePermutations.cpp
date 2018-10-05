#include "generatePermutations.hh"

thca::generatePermutations::generatePermutations(int lenghtList, int type, int printAll) :
	_lenghtList(lenghtList),
	_type(type),
	_noPrintAll(printAll),
	_numberPerm(0)
{
  _list.resize(lenghtList);
  int i = 1;
  for (auto &elem : _list)
    {
      elem = i;
      i += 1;
    }
  _index.resize(lenghtList);
  for (auto &elem : _index)
    {
      elem = 0;
    }
}

void thca::generatePermutations::generateAll()
{
  if (_type != 1 && _type != 2)
    {
      std::cout << "Generator type not found" << std::endl;
      std::cout << "generator type: 1 -> Heap's, 2 -> Lexicographical" << std::endl;
      return;
    }
  else if (_lenghtList <= 0)
    {
      std::cout << "Lenght of list if <= 0" << std::endl;
      return;
    }
  else if (_type == 1)
    {
      generatorHeaps();
    }

  else if (_type == 2)
    {
      generatorLexicographical();
    }
  std::cout << "Number permutations: " << _numberPerm << std::endl;
}

void thca::generatePermutations::generatorHeaps()
{
  int tmp;
  int swapPos;

  generatorDisplayOne();
  for (auto i = 1; i < _lenghtList;)
    {
      if (_index.at(i) < i)
	{
	  swapPos = i % 2 * _index.at(i);
	  tmp = _list.at(swapPos);
	  _list.at(swapPos) = _list.at(i);
	  _list.at(i) = tmp;
	  _index.at(i) += 1;
	  i = 1;
	  generatorDisplayOne();
	}
      else
	{
	  _index[i] = 0;
	  i += 1;
	}
    }
}
void thca::generatePermutations::generatorLexicographical()
{
  generatorDisplayOne();
  auto stop = false;
  while (!stop) {
      auto backIt = _list.end() - 1;
      while (backIt > _list.begin() && *(backIt - 1) >= *backIt)
	--backIt;
      if (backIt == _list.begin()) {
        stop = true;
        break;
      }
      auto backItB = _list.end() - 1;
      while (*backItB <= *(backIt - 1))
	--backItB;
      std::iter_swap(backIt - 1, backItB);
      std::reverse(backIt, _list.end());
      generatorDisplayOne();
  }
}

void thca::generatePermutations::generatorDisplayOne()
{
  _numberPerm += 1;
  if (_noPrintAll == 1) {
      return ;
    }
  for (auto &elem : _list)
    {
      std::cout << elem;
    }
  std::cout << std::endl;
}
