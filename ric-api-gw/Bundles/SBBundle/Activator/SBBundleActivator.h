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

#ifndef _CELIX_SB_BUNDLE_ACTIVATOR_H_
#define _CELIX_SB_BUNDLE_ACTIVATOR_H_

#include <iostream>

#include <celix/dm/DmActivator.h>
#include <command.h>

#include "../Component/SBBundleComponent.h"

#define SB_BUNDLE_VERSION "1.0.0"
#define SB_BUNDLE_KEY "SBBundle"

#define SB_BUNDLE_CELLCONFIGREPORT_KEY "SBBundle-CellConfigReport"
#define SB_BUNDLE_UEADMISSIONSTATUS_KEY "SBBundle-UEAdmissionStatus"
#define SB_BUNDLE_UECONTEXTUPDATE_KEY "SBBundle-UEContextUpdate"

class SBBundleActivator : public DmActivator {

    public:
        SBBundleActivator(DependencyManager& mng) : DmActivator(mng) {}
        virtual void init();
        virtual void deinit();

    protected:

    private:
};

#endif /* _CELIX_SB_BUNDLE_ACTIVATOR_H_ */