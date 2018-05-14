#include "irreversible_block_consumer.h"

namespace eosio {
namespace soci {

void irreversible_block_consumer::consume(const std::vector<chain::block_state_ptr>& blocks)
{
    for (const auto& block : blocks)
        ilog(block->id.str());
}

} // namespace soci
} // namespace eosio
