#include "block_consumer.h"

namespace eosio {
namespace soci {

void block_consumer::consume(const std::vector<chain::block_state_ptr> &blocks)
{
    for (auto block : blocks)
        ilog(block->id.str());
}

} // namespace soci
} // namespace eosio
