//
// Created by sancar koyunlu on 9/18/13.
// Copyright (c) 2013 hazelcast. All rights reserved.



#ifndef HAZELCAST_ClientTxnTest
#define HAZELCAST_ClientTxnTest

#include "iTest/iTest.h"
#include "hazelcast/client/ClientConfig.h"
#include "HazelcastInstance.h"

namespace hazelcast {
    namespace client {

        class HazelcastClient;

        namespace test {

            class HazelcastInstanceFactory;

            class HAZELCAST_API ClientTxnTest : public iTest::iTestFixture<ClientTxnTest> {

            public:

                ClientTxnTest(HazelcastInstanceFactory&);

                ~ClientTxnTest();

                void addTests();

                void beforeClass();

                void afterClass();

                void beforeTest();

                void afterTest();

                void testTxnRollback();

            private:
                HazelcastInstanceFactory& hazelcastInstanceFactory;
                HazelcastInstance server;
                ClientConfig clientConfig;
				std::auto_ptr<HazelcastClient> client;
            };

        }
    }
}


#endif //HAZELCAST_ClientTxnTest