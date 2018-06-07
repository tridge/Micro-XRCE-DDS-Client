
// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _MICRORTPS_CLIENT_PROFILE_SESSION_DELETE_ENTITIES_H_ 
#define _MICRORTPS_CLIENT_PROFILE_SESSION_DELETE_ENTITIES_H_

#ifdef __cplusplus
extern "C"
{
#endif

// TODO (julian): uncomment when merge with feature/streams
//#include <micrortps/client/session/session.h>
//#include <micrortps/client/session/stream_id.h>
//#include <micrortps/client/session/object_id.h>
#include <stdint.h>

// TODO (julian): remove when merge with feature/streams
typedef void Session;
typedef void StreamId;
typedef void ObjectId;

int write_delete_entity(Session* session, StreamId stream_id, ObjectId object_id);

#ifdef __cplusplus
}
#endif

#endif //_MICRORTPS_CLIENT_PROFILE_SESSION_DELETE_ENTITIES_H_