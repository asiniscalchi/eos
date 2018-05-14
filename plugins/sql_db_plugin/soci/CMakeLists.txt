add_library(db_plugin_soci
    irreversible_block_consumer.cpp
    block_consumer.cpp
    )

target_link_libraries(db_plugin_soci chain_plugin)
