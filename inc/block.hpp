#include <chrono>
#include <string>

namespace blockchainCpp
{
  class Block
  {
    public:
      std::string hash;
      std::string previousHash;

      Block(const std::string& _data, const std::string& _previousHash) :
        data(_data), previousHash(_previousHash),
        timeStamp(std::chrono::system_clock::now().time_since_epoch() /
          std::chrono::milliseconds(1)) {}
    
    private:
      std::string data;
      long long timeStamp;
  };
}