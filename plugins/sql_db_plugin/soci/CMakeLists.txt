add_library(db_plugin_soci
    irreversible_block_storage.cpp
    block_storage.cpp
    )

target_link_libraries(db_plugin_soci chain_plugin)
