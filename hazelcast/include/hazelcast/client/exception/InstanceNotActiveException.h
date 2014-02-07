//
// Created by sancar koyunlu on 27/10/13.
// Copyright (c) 2013 hazelcast. All rights reserved.



#ifndef HAZELCAST_HazelcastInstanceNotActiveException
#define HAZELCAST_HazelcastInstanceNotActiveException

#include "hazelcast/client/exception/IException.h"

namespace hazelcast {
    namespace client {
        namespace exception {
            /**
             * Thrown when HazelcastInstance is not active during an invocation.
             */
            class HAZELCAST_API InstanceNotActiveException : public IException {
            public:
                /**
                 * Constructor
                 */
                InstanceNotActiveException(const std::string &source);

                /**
                 * Destructor
                 */
                virtual ~InstanceNotActiveException() throw();

                /**
                 * return exception explanation string.
                 */
                virtual char const *what() const throw();
            };

        }
    }
}

#endif //HAZELCAST_HazelcastInstanceNotActiveException