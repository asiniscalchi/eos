#include "block_storage.h"

namespace eosio {
namespace soci {

void block_storage::consume(const std::vector<chain::block_state_ptr> &blocks)
{
    for (auto block : blocks)
        ilog(block->id.str());
}

} // namespace soci
} // namespace eosio
