/*
 * Copyright 2019-present Open Networking Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CELIX_SB_BUNDLE_COMPONENT_H_
#define _CELIX_SB_BUNDLE_COMPONENT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <thread>

#include <log_service.h>
#include <log_helper.h>
#include <grpcpp/grpcpp.h>
#include <grpc/support/log.h>

#include "../../../APIs/Bundles/AbstractBundleComponent.h"
#include "../../../APIs/GWCore/AbstractGWCoreComponent.h"
#include "../Activator/SBBundleActivator.h"
#include "../../../APIs/Common/APIGwLogServiceWrapper.h"
#include "../API/e2-interface/gRPCServerE2Interface.h"

#define GRPC_SB_IP "127.0.0.1"
#define GRPC_SB_PORT "50002"

class gRPCServerE2Interface;

class SBBundleComponent : public AbstractBundleComponent {

    public:
        SBBundleComponent() = default;
        ~SBBundleComponent() = default;

        void setLogService(const log_service_t* logSrv);
        void notifyEvent(std::string srcBundle, std::string dstBundle, std::map<std::string, std::map<std::string, std::string>> message);
        void registerBundle();
        void unregisterBundle();

        void init();
        void start();
        void stop();
        void deinit();

        // for gRPC
        void runGRPCServer();
        void killGRPCServer();

        void setGWCoreComponent(AbstractGWCoreComponent* gwcore);
        AbstractGWCoreComponent* getGWCoreComponent();
        
    protected:

    private:
        gRPCServerE2Interface* serviceE2Interface {nullptr};
        AbstractGWCoreComponent* gwCoreComponent {nullptr};
        std::thread* th_e2interface {nullptr};
        const log_service_t* logSrv {nullptr};
};



#endif /* _CELIX_SB_BUNDLE_COMPONENT_H_ */