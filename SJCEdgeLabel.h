//
//  SJCEdgeLabel.h
//  PingDD
//
//  Created by 时光与你 on 2019/2/20.
//  Copyright © 2019 Yehwang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
IB_DESIGNABLE
@interface SJCEdgeLabel : UILabel
@property (nonatomic, assign) IBInspectable CGFloat topEdge;
@property (nonatomic, assign) IBInspectable CGFloat leftEdge;
@property (nonatomic, assign) IBInspectable CGFloat bottomEdge;
@property (nonatomic, assign) IBInspectable CGFloat rightEdge;

@property (nonatomic, assign) UIEdgeInsets contentEdgeInsets;
@end

NS_ASSUME_NONNULL_END
