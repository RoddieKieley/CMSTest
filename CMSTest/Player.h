//
//  Player.h
//  CMSTest
//
//  Created by Roddie Kieley on 12-12-15.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__Player__
#define __CMSTest__Player__

#include "Input.h"
#include "decaf/util/StlQueue.h"
#include "../../ThirdParty/box2d/Box2D/Box2D/Box2D.h"
#include "PublisherT.cpp"
#include <string>

struct b2BodyDef;
struct b2FixtureDef;
class B2DWorld;
class b2Body;
class b2PolygonShape;
namespace Rock2D
{
    class Timer;
}


class Player :
    public Input::ICallbacks
{
public:
    class ICallbacks
    {
    public:
        virtual void OnPlayerCreated(std::string& strUUID) {};
        virtual void OnPlayerDestroyed(std::string& strUUID) {};
    };
    
protected:
    class _Publisher :
        public ICallbacks,
        public PublisherT<ICallbacks*>
    {
    protected:
        std::list<ICallbacks*>          m_listSubscribersSwap;
    public:
        virtual void OnPlayerCreated(std::string& strUUID);
        virtual void OnPlayerDestroyed(std::string& strUUID);
    };
private:
    static uint32_t         s_ui32Count;
    static uint32_t         s_ui32Type;
    
protected:
    uint64_t        m_ui64Tag;
    std::string     m_strUUID;
    
    b2Body*         m_pb2bPod;
    B2DWorld*       m_pB2DWorld;

    Rock2D::Timer*          m_pBulletTimer;
    
    decaf::util::StlQueue<b2Vec2>       m_b2v2MoveQueue;
    decaf::util::StlQueue<b2Vec2>       m_b2v2MoveSwapQueue;

    decaf::util::StlQueue<b2Vec2>       m_b2v2ShootQueue;
    decaf::util::StlQueue<b2Vec2>       m_b2v2ShootSwapQueue;

    decaf::util::StlQueue<b2Body*>      m_b2bBulletQueue;
    //decaf::util::StlQueue<b2Body*>      m_b2bBulletSwapQueue;

    // Helper(s)
    void CreatePod();
    void CreateBullet(b2Vec2& b2v2Bullet);
    
public:
    static _Publisher               Publisher;
    
    // Constructor(s)
    Player(const std::string& strUUID, B2DWorld* pB2DWorld);
    
    // Destructor(s)
    ~Player();
    
    // Method(s)
    void Update();
    bool ThisUUIDIsAMatch(const std::string& strUUID);
    
    // Input::ICallbacks implementation
    virtual void OnDualStick(const std::string& strUUID, const box2d::PbVec2& pbv2Move, const box2d::PbVec2& pbv2Shoot);
};


#endif /* defined(__CMSTest__Player__) */
