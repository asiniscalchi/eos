#ifndef PEER_H
#define PEER_H

#include <string>

#include "fc/variant.hpp"
#include "eosio/chain/transaction.hpp"
#include "remote.hpp"

namespace eosio {
namespace client {

class Peer : public Remote
{
public:
    fc::variant connect(const std::string& host) const;
    fc::variant disconnect(const std::string& host) const;
    fc::variant status(const std::string& host) const;
    fc::variant connections(const std::string& host) const;
    fc::variant get_info() const;
    fc::variant get_code(const std::string &account_name) const;
    fc::variant get_table(const std::string &scope,
                          const std::string &code,
                          const std::string &table) const;
    fc::variant get_account(const std::string& name) const;
    fc::variant get_block(const std::string &id_or_num) const;
    fc::variant get_key_accounts(const std::string &public_key) const;
    fc::variant get_controlled_accounts(const std::string &account) const;
    fc::variant get_keys_required(const chain::signed_transaction& transaction,
                                  const fc::variant& public_keys) const;
    fc::variant get_transaction(const std::string &id) const;
    fc::variant get_transactions(const std::string &account_name,
                                 const std::string &skip_seq,
                                 const std::string &num_seq) const;
    fc::variant push_transaction(const chain::signed_transaction& transaction) const;
    fc::variant push_transactions(const std::vector<chain::signed_transaction>& transactions) const;
    fc::variant push_JSON_transaction(const fc::variant& transaction) const;
    fc::variant json_to_bin_function(const std::string &contract,
                                     const std::string &action,
                                     const std::string &data) const;
};

} // namespace client
} // namespace eosio

#endif // PEER_H
