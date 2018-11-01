#ifndef TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH
#define TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH

#include <vector>
#include <iostream>
#include <algorithm>

namespace thca {
  class generatePermutations
  {
   private:
    int			_lenghtList;
    int 		_type;
    int 		_noPrintAll;


    std::vector<int>	_list;
    std::vector<int>	_index;
    long long		_numberPerm;

   public:
    explicit generatePermutations(int lenghtList, int type = 1, int noPrintAll = 0);

   public:
    void generateAll();
   private:
    void generatorHeaps();
    void generatorLexicographical();
    void generatorDisplayOne();
  };
}

#endif //TH_SECURITYTEST_ANDROID_GENERATEPERMUTATIONS_HH
