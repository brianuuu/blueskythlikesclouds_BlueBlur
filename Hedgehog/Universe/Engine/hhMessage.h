﻿#pragma once

#include <BlueBlur.inl>
#include <Hedgehog/Base/hhObject.h>

namespace Hedgehog::Universe
{
    class Message : public Base::CObject
    {
    public:
        uint32_t m_SenderActorID;
        boost::shared_ptr<void> m_spUnk0;

        virtual ~Message() = default;
        virtual bool IsOfType(const char* pType) = 0;
        virtual const char* GetType() = 0;
    };

    ASSERT_OFFSETOF(Message, m_SenderActorID, 0x4);
    ASSERT_OFFSETOF(Message, m_spUnk0, 0x8);
    ASSERT_SIZEOF(Message, 0x10);
}
