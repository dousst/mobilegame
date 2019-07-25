//
//  GameScene.h
//  NoughtsAndCrosses
//
//  Created by Denee Toussaint on 08/01/2018.
//  Copyright © 2018 Denee Toussaint. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface GameScene : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
