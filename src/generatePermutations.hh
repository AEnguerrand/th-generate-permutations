#ifndef TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH
#define TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH

#include <vector>
#include <iostream>

class generatePermutations
{
 private:
  int			_lenghtList;
  std::vector<int>	_list;
  std::vector<int>	_index;
  long long		_numberPerm;

 public:
  generatePermutations(int lenghtList);

 public:
  void generateAll();
  void displayOne();

};

#endif //TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH
