add_library(db_plugin_mongodb
    irreversible_block_consumer.cpp
    )

target_link_libraries(db_plugin_mongodb chain_plugin)
