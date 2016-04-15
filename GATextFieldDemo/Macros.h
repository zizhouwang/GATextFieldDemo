//
//  March.h
//  fnsq
//
//  Created by wzzyinqiang on 14-12-5.
//  Copyright (c) 2014年 wzzyinqiang. All rights reserved.
//

#pragma mark - DEF_START_OC

#define AppDelegateInstance ((AppDelegate*)([UIApplication sharedApplication].delegate))

#define ScreenWidth ([[UIScreen mainScreen]bounds].size.width)
#define ScreenHeight ([[UIScreen mainScreen]bounds].size.height)

#define COLOR_RGBA(R,G,B,A) ([UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:A])

#define KEY_WINDOW  ([[UIApplication sharedApplication] keyWindow])

#define SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] doubleValue]

// MARK: - 专门用于等比放大控件
#define Equal_Blow_Up_Width (ScreenWidth / 320.0)
#define Equal_Blow_Up_Height (ScreenHeight / 480.0)

#define GET_VC(self,vc) \
for (UIView * next = [self superview]; next; next = next.superview) {\
UIResponder * nextResponder = [next nextResponder];\
if ([nextResponder isKindOfClass:[UIViewController class]]) {\
vc = (UIViewController *)nextResponder;\
break;\
}\
}

#define HEAD_URL @"http://localhost:8080/pwm/pwmserver/v1/security_sync"

#define DIC_TO_JSON(DIC) ([[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:DIC options:NSJSONWritingPrettyPrinted error:nil] encoding:NSUTF8StringEncoding])

//[self.navigationController showViewController:vc sender:nil];\

#define SKIP_VC(vc) if (SYSTEM_VERSION >= 8.0f) {\
    [self.navigationController pushViewController:vc animated:YES];\
}\
else {\
    [self.navigationController pushViewController:vc animated:YES];\
}

//[super_vc.navigationController showViewController:vc sender:nil];\

#define SKIP_VC_FIRST_COMPLETE(super_vc,vc) if (SYSTEM_VERSION >= 8.0f) {\
    [super_vc.navigationController pushViewController:vc animated:YES];\
}\
else {\
    [super_vc.navigationController pushViewController:vc animated:YES];\
}

#define ONE_DAY_SECOND 86400.0

#define OBJECT_AT_INDEX(index) (objectAtIndex:index)

#define ACCOUNT_DIC(account_id,account_name,base_currency,balance,account_type,recordDic) ([NSDictionary dictionaryWithObjectsAndKeys:account_id, @"account_id", account_name, @"account_name", base_currency, @"base_currency", balance, @"balance",account_type, @"account_type", recordDic, DEF_TALLYS_DIC, nil])

#define KTableStartPointX 25
#define KTableStartPointY 120
//已订阅的按钮起始的位置
#define KButtonWidth 54
#define KButtonHeight 40
//按钮的大小

#pragma mark - CoreData key值
#define DEF_COREDATA_KEY_USER @"User"
#define DEF_COREDATA_KEY_ACCOUNT @"Account"
#define DEF_COREDATA_KEY_TALLY @"Tally"
#define DEF_COREDATA_KEY_USER_ACCOUNTS @"user_account"
#define DEF_COREDATA_KEY_ACCOUNT_TALLYS @"account_tally"
#define DEF_COREDATA_KEY_TALLY_TAG @"tally_tag"
#define DEF_COREDATA_KEY_TAG @"Tally_tag"
#define DEF_COREDATA_KEY_TAG_TAG @"tag"
#define DEF_COREDATA_KEY_SORT @"Sort"
#define DEF_COREDATA_KEY_SORT_ID @"sort_id"
#define DEF_COREDATA_KEY_SORT_NAME @"sort_name"
#define DEF_COREDATA_KEY_SORT_IMAGE @"sort_image"
#define DEF_COREDATA_KEY_SORT_SELECTED_IMAGE_NAME @"sort_selected_image_name"

#pragma mark - 公用数据
#define DEF_SUBSCRIPTION_ACCOUNT_ID @"subscription_account_id"

#pragma mark - 用户数据
#define DEF_USER_ID @"user_id"

#pragma mark - 用户数据
#define DEF_ACCOUNT_ID @"account_id"
#define DEF_ACCOUNT_NAME @"account_name"
#define DEF_BASE_CURRENCY @"base_currency"
#define DEF_ACCOUNT_TYPE @"account_type"
#define DEF_ACCOUNT_TYPE_NUMBER @"account_typeNumber"
#define DEF_BALANCE @"balance"
#define DEF_TALLYS_DIC @"tallys_dic"
#define DEF_ISSUING_BANK @"issuing_bank"
#define DEF_BILL_DATE @"bill_date"
#define DEF_REPAY_DATE @"repay_date"

#pragma mark - 记账数据
#define DEF_TRAN_ID @"tran_id"
#define DEF_DATE @"date"
#define DEF_MONEY @"money"
#define DEF_SORT @"sort"
#define DEF_SORT_ID @"sort_id"
#define DEF_TAGARRAY @"tag_array"
#define DEF_REPAYDATE @"repay_date"
#define DEF_TRAN_TYPE @"tran_type"
#define DEF_TRANSFER_ACCOUNTID @"transfer_accountID"

#pragma mark - 理财记账数据
#define DEF_ISSUER @"issuer"
#define DEF_PRO_NAME @"pro_name"
#define DEF_PROFIT_TYPE @"profit_type"
#define DEF_SUBSCRIPTION_ACCOUNT_ID @"subscription_account_id"
#define DEF_END_DATE @"end_date"
#define DEF_INVESTMENT_HORIZON @"investment_horizon"
#define DEF_EXPECTED_YIELD @"expected_yield"
#define DEF_EXPECT_PROFIT @"expect_profit"

#pragma mark - 整存整取数据
#define DEF_DEPOSIT_TERM @"deposit_term"

#pragma mark - 分类数据
#define DEF_SORT_KEY @"sort_key"
#define DEF_SORT_VALUE @"sort_value"
#define DEF_SORT_DEFAULT_IMAGE_NAME @"sort_default_image_name"
#define DEF_SORT_SELECTED_IMAGE_NAME @"sort_selected_image_name"

#define DEF_SORT_GIFT @"gift"
#define DEF_SORT_DIET @"diet"
#define DEF_SORT_FASHION @"fashion"
#define DEF_SORT_TRIP @"trip"
#define DEF_SORT_SOCIAL_CONTACT @"social_contact"
#define DEF_SORT_ENTERTAINMENT @"entertainment"
#define DEF_SORT_HOUSING @"housing"
#define DEF_SORT_CREDIT_CARD @"credit_card"

#pragma mark - 预算数据
#define DEF_BUDGET_ID @"budget_id"
#define DEF_BUDGET_KEY @"budget_key"
#define DEF_BUDGET_MONEY @"budget_money"

#pragma mark - 愿望数据
#define DEF_DESIRE_ID @"deisre_id"
#define DEF_DESIRE_NAME @"desire_name"
#define DEF_DESIRE_MONEY @"desire_money"
#define DEF_DESIRE_SURPLUS @"desire_surplus"

#pragma mark - 辅助生成ID数据
#define DEF_NEW_ACCOUNT_BIGGEST_NUMBER @"account_biggest_number"
#define DEF_NEW_SORT_BIGGEST_NUMBER @"sort_biggest_number"

#pragma mark - today和contain app公共数据
#define DEF_GROUP_ACCOUNT_DATA @"group.com.wzz.licaichan"

#pragma mark - 自定义字体
#define DEF_CUSTOM_CITYD_BOLD @"CityD-Bold"

#pragma mark - 搜索记账数据属性
#define DEF_TALLY_TYPE_SEARCH @"tally_type_search"
#define DEF_SORT_SEARCH @"sort_search"
#define DEF_TAG_SEARCH @"tag_search"
#define DEF_MONEY_SEARCH @"money_search"
