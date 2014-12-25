// Copyright (c) 2011-2014 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#define CRYPTONOTE_MAX_BLOCK_NUMBER                     500000000
#define CRYPTONOTE_MAX_BLOCK_SIZE                       500000000  // block header blob limit, never used!
#define CRYPTONOTE_MAX_TX_SIZE                          1000000000
#define CRYPTONOTE_PUBLIC_ADDRESS_TEXTBLOB_VER          0
#define CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX         0x6990
#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            10
#define CURRENT_TRANSACTION_VERSION                     1
#define CURRENT_BLOCK_MAJOR_VERSION                     1
#define CURRENT_BLOCK_MINOR_VERSION                     0
#define CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT              60*60*2

#define BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW               60

#define MONEY_SUPPLY                                    static_cast<uint64_t>(-1)
#define EMISSION_SPEED_FACTOR                           (20)
#define GENESIS_BLOCK_REWARD                            ((MONEY_SUPPLY / 100) * 38)

#define CRYPTONOTE_REWARD_BLOCKS_WINDOW                 100
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE       20000 //size of block (bytes) after which reward for block calculated using block size
#define CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE          600
#define CRYPTONOTE_DISPLAY_DECIMAL_POINT                8
#define COIN                                            100000000
#define DEFAULT_FEE                                     1000000

#define DIFFICULTY_TARGET                               120 // seconds
#define DIFFICULTY_WINDOW                               720 // blocks
#define DIFFICULTY_LAG                                  15
#define DIFFICULTY_CUT                                  60  // timestamps to cut after sorting
#define DIFFICULTY_BLOCKS_COUNT                         DIFFICULTY_WINDOW + DIFFICULTY_LAG


#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS      DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS
#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS       1


#define DIFFICULTY_BLOCKS_ESTIMATE_TIMESPAN             DIFFICULTY_TARGET


#define BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT          10000  //by default, blocks ids count in synchronizing
#define BLOCKS_SYNCHRONIZING_DEFAULT_COUNT              200    //by default, blocks count in blocks downloading
#define CRYPTONOTE_PROTOCOL_HOP_RELAX_COUNT             3      //value of hop, after which we use only announce of new block

#define P2P_DEFAULT_PORT                                61280
#define RPC_DEFAULT_PORT                                61281
#define COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT           1000

#define P2P_LOCAL_WHITE_PEERLIST_LIMIT                  1000
#define P2P_LOCAL_GRAY_PEERLIST_LIMIT                   5000

#define P2P_DEFAULT_CONNECTIONS_COUNT                   8
#define P2P_DEFAULT_HANDSHAKE_INTERVAL                  60           //secondes
#define P2P_DEFAULT_PACKET_MAX_SIZE                     50000000     //50000000 bytes maximum packet size
#define P2P_DEFAULT_PEERS_IN_HANDSHAKE                  250
#define P2P_DEFAULT_CONNECTION_TIMEOUT                  5000       //5 seconds
#define P2P_DEFAULT_PING_CONNECTION_TIMEOUT             2000       //2 seconds
#define P2P_DEFAULT_INVOKE_TIMEOUT                      60*2*1000  //2 minutes
#define P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT            5000       //5 seconds
#define P2P_STAT_TRUSTED_PUB_KEY                        "e43aea2f5f0c27503ccd21b4973f7a3f489daa98976f62fbc5606fd47bd913b0"
#define P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT       70

#define ALLOW_DEBUG_COMMANDS

#define CRYPTONOTE_NAME                         "redwind"
#define CRYPTONOTE_BLOCKS_FILENAME              "blocks.dat"
#define CRYPTONOTE_BLOCKINDEXES_FILENAME        "blockindexes.dat"
#define CRYPTONOTE_BLOCKSCACHE_FILENAME         "blockscache.dat"
#define CRYPTONOTE_POOLDATA_FILENAME            "poolstate.bin"
#define P2P_NET_DATA_FILENAME                   "p2pstate.bin"
#define MINER_CONFIG_FILE_NAME                  "miner_conf.json"

#define THREAD_STACK_SIZE                       5 * 1024 * 1024

#define GENESIS_COINBASE_TX_HEX "010a01ff0026dc9e8aae8f85d7c70202b86a22436a14ec9402d4ea03533bd8d60699df80f9fe5a49ffa8" \
                                "915630d5c29adc9e8aae8f85d7c70202118c7c61d0ac5e8007ced242caacf063e6bf20c8cb0471e82a51" \
                                "ff3d027c8302dc9e8aae8f85d7c70202cacb7b13603deb80ed34c3a5ef80edf28f0de836d123072fe5f4" \
                                "73cf217250e3dc9e8aae8f85d7c70202893470dcb8ef119b6f41a31ad9c2e788970de3394a2e37a35fbe" \
                                "b41bfe68fc90dc9e8aae8f85d7c70202bdd92956e3c6482658d80fe3289da78b3aef43ea8fd5d1576509" \
                                "e30a50acc3aadc9e8aae8f85d7c702024c0a205f2bcd5d69724cafa73085d3f29b3e3410fca1fd42a948" \
                                "03621b4f65c5dc9e8aae8f85d7c7020299b97f9b57b774cbee476c991723272e01c6707447ec41f4b394" \
                                "973136d10fdcdc9e8aae8f85d7c7020213a738553af1bbe31abf54bf2f03b12838834a964e6cf8ff49ea" \
                                "2d4974441f57dc9e8aae8f85d7c70202830b812ac61a049cbe70273362a2501335556e16a25d81f8112e" \
                                "0a06c4765e5cdc9e8aae8f85d7c70202562c080f1a10200b0a462834dea13b8f9c727d5ee0668526ddf5" \
                                "38717f8da6fddc9e8aae8f85d7c7020284fc21e3c82fec0b1a3d8f18633c7fe8fce805f34d9531b713d2" \
                                "ab5b8099809adc9e8aae8f85d7c702028e4ef02f49bca02c0db930e59dc4560463ec78d485637babfab7" \
                                "eb36d847dfd9dc9e8aae8f85d7c70202094a90fc1eb4709bd39a3332f4936fdfc5d8696ea4a06626f990" \
                                "bd0764afa644dc9e8aae8f85d7c70202dca7b6784f3839a914ad02e497671792cab0d9f2f3d35885171e" \
                                "e958b29f305bdc9e8aae8f85d7c70202cdc946ee74d644900527a26794da917899197c485369b9a8573b" \
                                "25f984e05abcdc9e8aae8f85d7c702024caa8cb970e83abc56bb8b2aeced17cade8f7785b8edd001f3ce" \
                                "701e60fe5a4fdc9e8aae8f85d7c702022a6e4109ffce604348638bced5992d10980e23746a9aa10aca68" \
                                "d11f540fe7efdc9e8aae8f85d7c702021dd62568db7b8ca2197df6ce6e84ba9e15901569210287051a92" \
                                "c0c34b5566e8dc9e8aae8f85d7c70202d26ebeb120c18565a284a1ff5593e40793571e50bb16a854e75a" \
                                "dd022ac14eebdc9e8aae8f85d7c70202f8e625859f1626872c3032133ee4f8e35da4f1c959f2f0a0add1" \
                                "b2c68d6e6963dc9e8aae8f85d7c702026cbaffa2d0ee402294fd0414e628948cbb9a8a467469ba1aa7a1" \
                                "1a58e1b86d9ddc9e8aae8f85d7c70202f7fa3588c2f009056d8555505f147318beec95dd3dfb868eddd4" \
                                "31dc50fbbc3adc9e8aae8f85d7c70202c12d36c9e2df5226b06aae7def10126fc97248982d1180b718ae" \
                                "14b84d736836dc9e8aae8f85d7c70202901d52f6d5df23920915d784315911915db652797bd313ba23c9" \
                                "355b9620d603dc9e8aae8f85d7c70202a27c8c7a386366eb388c740a0608d0ea905c1c3d336dac35d069" \
                                "24abdca037b9dc9e8aae8f85d7c7020212af188d4858175d332799d9aa1ffcccbde17da218603eee481d" \
                                "f502469e7effdc9e8aae8f85d7c7020238140a68f10c988098d72d5dce5d0155cc11bf012454dd9fae8d" \
                                "afbb011c7a7bdc9e8aae8f85d7c702022995ad96fd6a035c5c1695bc941337590127832f96b9710de82a" \
                                "8ab5fcc47ae0dc9e8aae8f85d7c702025c177632fee85622b0e84468ba3b65417728d0921eb61834e233" \
                                "c8b83b8364d9dc9e8aae8f85d7c7020237b8187a0a0a4d1511142609ef989b183fe9f074a09f627e310f" \
                                "e255e344a007dc9e8aae8f85d7c702028b8c51180477c0596eb5a25c2240017f6190af70ff8702c76a60" \
                                "6264d168c948dc9e8aae8f85d7c70202333c654ff42010384acdb88786eef893cc27e1f9112a57bc29c9" \
                                "dd560ad9692cdc9e8aae8f85d7c702029a52711987a601c3147991eb62e862bbcb24ff651d708937d074" \
                                "4dd53594d679dc9e8aae8f85d7c702022f4fc0bdae633e1c5b809efc50587dd0f044d1f594a602ccdbbe" \
                                "78f3dea330ecdc9e8aae8f85d7c70202f3eeee86fe3e6e156aad6123b17265aaeaa1fb2e0617d57abe56" \
                                "3761babbcc1edc9e8aae8f85d7c702027cca10584ce59f16fc31d5054135094528ff03975b56c6a325b6" \
                                "a769092940c7dc9e8aae8f85d7c70202a55e2b925ea380dd2c3afc549def1015d64f788975dd76917191" \
                                "579443362e28dc9e8aae8f85d7c7020281ad05e1196baca39c134845e002db67b2a1379c1bd747389404" \
                                "4cc9ebbc2c6a2101b20d061025a4ca5060809cbbd40b75a1b14e9050a6c3434a6b6791aeadd2bcf5"
