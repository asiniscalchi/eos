/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */

#pragma once

#include "consumer_core.h"

#include <eosio/chain/block_state.hpp>

namespace eosio {
namespace mongodb {

class irreversible_block_consumer : public consumer_core<chain::block_state_ptr>
{
public:
    void consume(const std::vector<chain::block_state_ptr>& blocks) override;
};

} // namespace mongodb
} // namespace eosio

