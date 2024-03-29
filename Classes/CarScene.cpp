/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "CarScene.h"

USING_NS_CC;

Scene* CarScene::createScene()
{
    auto scene= Scene::create();
    auto layer=CarScene::create();
    scene->addChild(layer);
    return scene;
}

// on "init" you need to initialize your instance
bool CarScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    //auto ground_url="../assets/bg/desert.jpg";
    auto ground=Sprite::create("bg/desert.jpg");
    ground->setPosition(Point(visibleSize.width/2 + origin.x,visibleSize.height/2 + origin.y));
    ground->setScale(1.8,1.4);
    this->addChild(ground);
    auto myLabel = Label::createWithTTF("Your Text", "fonts/Marker Felt.ttf", 24);
    myLabel->setPosition(Vec2(origin.x + visibleSize.width/2,origin.y + visibleSize.height - myLabel->getContentSize().height));
    this->addChild(myLabel,1);
    return true;
}
