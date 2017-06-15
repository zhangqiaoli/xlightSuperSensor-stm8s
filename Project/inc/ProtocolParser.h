#ifndef __PROTOCOL_PARSER_H
#define __PROTOCOL_PARSER_H

#include "_global.h"

extern uint8_t bMsgReady;

uint8_t ParseProtocol();
void build(uint8_t _destination, uint8_t _sensor, uint8_t _command, uint8_t _type, bool _enableAck, bool _isAck);
void Msg_NodeConfigAck(uint8_t _to, uint8_t _ncf);
void Msg_NodeConfigData(uint8_t _to);
void Msg_RequestNodeID();
void Msg_Presentation();

#ifdef EN_SENSOR_ALS
void Msg_SenALS(uint8_t _value);
#endif

#ifdef EN_SENSOR_PIR
void Msg_SenPIR(bool _sw);
#endif

#ifdef EN_SENSOR_PM25
void Msg_SenPM25(uint16_t _value);
#endif

#endif /* __PROTOCOL_PARSER_H */