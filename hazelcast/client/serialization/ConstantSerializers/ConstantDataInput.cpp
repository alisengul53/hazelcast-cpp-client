//
// Created by sancar koyunlu on 5/28/13.
// Copyright (c) 2013 hazelcast. All rights reserved.


#include "ConstantDataInput.h"
#include "../BufferedDataInput.h"

namespace hazelcast {
    namespace client {
        namespace serialization {


            void operator >>(BufferedDataInput& dataInput, byte& data) {
                data = dataInput.readByte();
            };

            void operator >>(BufferedDataInput& dataInput, bool& data) {
                data = dataInput.readBoolean();
            };

            void operator >>(BufferedDataInput& dataInput, char& data) {
                data = dataInput.readChar();
            };

            void operator >>(BufferedDataInput& dataInput, short & data) {
                data = dataInput.readShort();
            };

            void operator >>(BufferedDataInput& dataInput, int& data) {
                data = dataInput.readInt();
            };

            void operator >>(BufferedDataInput& dataInput, long & data) {
                data = dataInput.readLong();
            };

            void operator >>(BufferedDataInput& dataInput, float & data) {
                data = dataInput.readFloat();
            };

            void operator >>(BufferedDataInput& dataInput, double & data) {
                data = dataInput.readDouble();
            };

            void operator >>(BufferedDataInput& dataInput, std::string&  data) {
                data = dataInput.readUTF();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<byte>& data) {
                data = dataInput.readByteArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<char >& data) {
                data = dataInput.readCharArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<short >& data) {
                data = dataInput.readShortArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<int>& data) {
                data = dataInput.readIntArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<long >& data) {
                data = dataInput.readLongArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<float >& data) {
                data = dataInput.readFloatArray();
            };

            void operator >>(BufferedDataInput& dataInput, std::vector<double >& data) {
                data = dataInput.readDoubleArray();
            };

            void operator >>(BufferedDataInput& dataInput, Data& data) {
            };
        }
    }
}