#include "reflection.hh"

std::map<std::string, ta::ta *> ta_reflector::factory_map = {
    {"ACOS", new ta::ACOS()},
    {"AD", new ta::AD()},
    {"ADD", new ta::ADD()},
    {"ADOSC", new ta::ADOSC()},
    {"ADX", new ta::ADX()},
    {"ADXR", new ta::ADXR()},
    {"APO", new ta::APO()},
    {"AROON", new ta::AROON()},
    {"AROONOSC", new ta::AROONOSC()},
    {"ASIN", new ta::ASIN()},
    {"ATAN", new ta::ATAN()},
    {"ATR", new ta::ATR()},
    {"AVGPRICE", new ta::AVGPRICE()},
    {"BBANDS", new ta::BBANDS()},
    {"BETA", new ta::BETA()},
    {"BOP", new ta::BOP()},
    {"CCI", new ta::CCI()},
    {"CDL2CROWS", new ta::CDL2CROWS()},
    {"CDL3BLACKCROWS", new ta::CDL3BLACKCROWS()},
    {"CDL3INSIDE", new ta::CDL3INSIDE()},
    {"CDL3LINESTRIKE", new ta::CDL3LINESTRIKE()},
    {"CDL3OUTSIDE", new ta::CDL3OUTSIDE()},
    {"CDL3STARSINSOUTH", new ta::CDL3STARSINSOUTH()},
    {"CDL3WHITESOLDIERS", new ta::CDL3WHITESOLDIERS()},
    {"CDLABANDONEDBABY", new ta::CDLABANDONEDBABY()},
    {"CDLADVANCEBLOCK", new ta::CDLADVANCEBLOCK()},
    {"CDLBELTHOLD", new ta::CDLBELTHOLD()},
    {"CDLBREAKAWAY", new ta::CDLBREAKAWAY()},
    {"CDLCLOSINGMARUBOZU", new ta::CDLCLOSINGMARUBOZU()},
    {"CDLCONCEALBABYSWALL", new ta::CDLCONCEALBABYSWALL()},
    {"CDLCOUNTERATTACK", new ta::CDLCOUNTERATTACK()},
    {"CDLDARKCLOUDCOVER", new ta::CDLDARKCLOUDCOVER()},
    {"CDLDOJI", new ta::CDLDOJI()},
    {"CDLDOJISTAR", new ta::CDLDOJISTAR()},
    {"CDLDRAGONFLYDOJI", new ta::CDLDRAGONFLYDOJI()},
    {"CDLENGULFING", new ta::CDLENGULFING()},
    {"CDLEVENINGDOJISTAR", new ta::CDLEVENINGDOJISTAR()},
    {"CDLEVENINGSTAR", new ta::CDLEVENINGSTAR()},
    {"CDLGAPSIDESIDEWHITE", new ta::CDLGAPSIDESIDEWHITE()},
    {"CDLGRAVESTONEDOJI", new ta::CDLGRAVESTONEDOJI()},
    {"CDLHAMMER", new ta::CDLHAMMER()},
    {"CDLHANGINGMAN", new ta::CDLHANGINGMAN()},
    {"CDLHARAMI", new ta::CDLHARAMI()},
    {"CDLHARAMICROSS", new ta::CDLHARAMICROSS()},
    {"CDLHIGHWAVE", new ta::CDLHIGHWAVE()},
    {"CDLHIKKAKE", new ta::CDLHIKKAKE()},
    {"CDLHIKKAKEMOD", new ta::CDLHIKKAKEMOD()},
    {"CDLHOMINGPIGEON", new ta::CDLHOMINGPIGEON()},
    {"CDLIDENTICAL3CROWS", new ta::CDLIDENTICAL3CROWS()},
    {"CDLINNECK", new ta::CDLINNECK()},
    {"CDLINVERTEDHAMMER", new ta::CDLINVERTEDHAMMER()},
    {"CDLKICKING", new ta::CDLKICKING()},
    {"CDLKICKINGBYLENGTH", new ta::CDLKICKINGBYLENGTH()},
    {"CDLLADDERBOTTOM", new ta::CDLLADDERBOTTOM()},
    {"CDLLONGLEGGEDDOJI", new ta::CDLLONGLEGGEDDOJI()},
    {"CDLLONGLINE", new ta::CDLLONGLINE()},
    {"CDLMARUBOZU", new ta::CDLMARUBOZU()},
    {"CDLMATCHINGLOW", new ta::CDLMATCHINGLOW()},
    {"CDLMATHOLD", new ta::CDLMATHOLD()},
    {"CDLMORNINGDOJISTAR", new ta::CDLMORNINGDOJISTAR()},
    {"CDLMORNINGSTAR", new ta::CDLMORNINGSTAR()},
    {"CDLONNECK", new ta::CDLONNECK()},
    {"CDLPIERCING", new ta::CDLPIERCING()},
    {"CDLRICKSHAWMAN", new ta::CDLRICKSHAWMAN()},
    {"CDLRISEFALL3METHODS", new ta::CDLRISEFALL3METHODS()},
    {"CDLSEPARATINGLINES", new ta::CDLSEPARATINGLINES()},
    {"CDLSHOOTINGSTAR", new ta::CDLSHOOTINGSTAR()},
    {"CDLSHORTLINE", new ta::CDLSHORTLINE()},
    {"CDLSPINNINGTOP", new ta::CDLSPINNINGTOP()},
    {"CDLSTALLEDPATTERN", new ta::CDLSTALLEDPATTERN()},
    {"CDLSTICKSANDWICH", new ta::CDLSTICKSANDWICH()},
    {"CDLTAKURI", new ta::CDLTAKURI()},
    {"CDLTASUKIGAP", new ta::CDLTASUKIGAP()},
    {"CDLTHRUSTING", new ta::CDLTHRUSTING()},
    {"CDLTRISTAR", new ta::CDLTRISTAR()},
    {"CDLUNIQUE3RIVER", new ta::CDLUNIQUE3RIVER()},
    {"CDLUPSIDEGAP2CROWS", new ta::CDLUPSIDEGAP2CROWS()},
    {"CDLXSIDEGAP3METHODS", new ta::CDLXSIDEGAP3METHODS()},
    {"CEIL", new ta::CEIL()},
    {"CMO", new ta::CMO()},
    {"CORREL", new ta::CORREL()},
    {"COS", new ta::COS()},
    {"COSH", new ta::COSH()},
    {"DEMA", new ta::DEMA()},
    {"DIV", new ta::DIV()},
    {"DX", new ta::DX()},
    {"EMA", new ta::EMA()},
    {"EXP", new ta::EXP()},
    {"FLOOR", new ta::FLOOR()},
    {"HT_DCPERIOD", new ta::HT_DCPERIOD()},
    {"HT_DCPHASE", new ta::HT_DCPHASE()},
    {"HT_PHASOR", new ta::HT_PHASOR()},
    {"HT_SINE", new ta::HT_SINE()},
    {"HT_TRENDLINE", new ta::HT_TRENDLINE()},
    {"HT_TRENDMODE", new ta::HT_TRENDMODE()},
    {"KAMA", new ta::KAMA()},
    {"LINEARREG", new ta::LINEARREG()},
    {"LINEARREG_ANGLE", new ta::LINEARREG_ANGLE()},
    {"LINEARREG_INTERCEPT", new ta::LINEARREG_INTERCEPT()},
    {"LINEARREG_SLOPE", new ta::LINEARREG_SLOPE()},
    {"LN", new ta::LN()},
    {"LOG10", new ta::LOG10()},
    {"MA", new ta::MA()},
    {"MACD", new ta::MACD()},
    {"MACDEXT", new ta::MACDEXT()},
    {"MACDFIX", new ta::MACDFIX()},
    {"MAMA", new ta::MAMA()},
    {"MAVP", new ta::MAVP()},
    {"MAX", new ta::MAX()},
    {"MAXINDEX", new ta::MAXINDEX()},
    {"MEDPRICE", new ta::MEDPRICE()},
    {"MFI", new ta::MFI()},
    {"MIDPOINT", new ta::MIDPOINT()},
    {"MIDPRICE", new ta::MIDPRICE()},
    {"MIN", new ta::MIN()},
    {"MININDEX", new ta::MININDEX()},
    {"MINMAX", new ta::MINMAX()},
    {"MINMAXINDEX", new ta::MINMAXINDEX()},
    {"MINUS_DI", new ta::MINUS_DI()},
    {"MINUS_DM", new ta::MINUS_DM()},
    {"MOM", new ta::MOM()},
    {"MULT", new ta::MULT()},
    {"NATR", new ta::NATR()},
    {"OBV", new ta::OBV()},
    {"PLUS_DI", new ta::PLUS_DI()},
    {"PLUS_DM", new ta::PLUS_DM()},
    {"PPO", new ta::PPO()},
    {"ROC", new ta::ROC()},
    {"ROCP", new ta::ROCP()},
    {"ROCR", new ta::ROCR()},
    {"ROCR100", new ta::ROCR100()},
    {"RSI", new ta::RSI()},
    {"RestoreCandleDefaultSettings", new ta::RestoreCandleDefaultSettings()},
    {"SAR", new ta::SAR()},
    {"SAREXT", new ta::SAREXT()},
    {"SIN", new ta::SIN()},
    {"SINH", new ta::SINH()},
    {"SMA", new ta::SMA()},
    {"SQRT", new ta::SQRT()},
    {"STDDEV", new ta::STDDEV()},
    {"STOCH", new ta::STOCH()},
    {"STOCHF", new ta::STOCHF()},
    {"STOCHRSI", new ta::STOCHRSI()},
    {"SUB", new ta::SUB()},
    {"SUM", new ta::SUM()},
    {"S_ACOS", new ta::S_ACOS()},
    {"S_AD", new ta::S_AD()},
    {"S_ADD", new ta::S_ADD()},
    {"S_ADOSC", new ta::S_ADOSC()},
    {"S_ADX", new ta::S_ADX()},
    {"S_ADXR", new ta::S_ADXR()},
    {"S_APO", new ta::S_APO()},
    {"S_AROON", new ta::S_AROON()},
    {"S_AROONOSC", new ta::S_AROONOSC()},
    {"S_ASIN", new ta::S_ASIN()},
    {"S_ATAN", new ta::S_ATAN()},
    {"S_ATR", new ta::S_ATR()},
    {"S_AVGPRICE", new ta::S_AVGPRICE()},
    {"S_BBANDS", new ta::S_BBANDS()},
    {"S_BETA", new ta::S_BETA()},
    {"S_BOP", new ta::S_BOP()},
    {"S_CCI", new ta::S_CCI()},
    {"S_CDL2CROWS", new ta::S_CDL2CROWS()},
    {"S_CDL3BLACKCROWS", new ta::S_CDL3BLACKCROWS()},
    {"S_CDL3INSIDE", new ta::S_CDL3INSIDE()},
    {"S_CDL3LINESTRIKE", new ta::S_CDL3LINESTRIKE()},
    {"S_CDL3OUTSIDE", new ta::S_CDL3OUTSIDE()},
    {"S_CDL3STARSINSOUTH", new ta::S_CDL3STARSINSOUTH()},
    {"S_CDL3WHITESOLDIERS", new ta::S_CDL3WHITESOLDIERS()},
    {"S_CDLABANDONEDBABY", new ta::S_CDLABANDONEDBABY()},
    {"S_CDLADVANCEBLOCK", new ta::S_CDLADVANCEBLOCK()},
    {"S_CDLBELTHOLD", new ta::S_CDLBELTHOLD()},
    {"S_CDLBREAKAWAY", new ta::S_CDLBREAKAWAY()},
    {"S_CDLCLOSINGMARUBOZU", new ta::S_CDLCLOSINGMARUBOZU()},
    {"S_CDLCONCEALBABYSWALL", new ta::S_CDLCONCEALBABYSWALL()},
    {"S_CDLCOUNTERATTACK", new ta::S_CDLCOUNTERATTACK()},
    {"S_CDLDARKCLOUDCOVER", new ta::S_CDLDARKCLOUDCOVER()},
    {"S_CDLDOJI", new ta::S_CDLDOJI()},
    {"S_CDLDOJISTAR", new ta::S_CDLDOJISTAR()},
    {"S_CDLDRAGONFLYDOJI", new ta::S_CDLDRAGONFLYDOJI()},
    {"S_CDLENGULFING", new ta::S_CDLENGULFING()},
    {"S_CDLEVENINGDOJISTAR", new ta::S_CDLEVENINGDOJISTAR()},
    {"S_CDLEVENINGSTAR", new ta::S_CDLEVENINGSTAR()},
    {"S_CDLGAPSIDESIDEWHITE", new ta::S_CDLGAPSIDESIDEWHITE()},
    {"S_CDLGRAVESTONEDOJI", new ta::S_CDLGRAVESTONEDOJI()},
    {"S_CDLHAMMER", new ta::S_CDLHAMMER()},
    {"S_CDLHANGINGMAN", new ta::S_CDLHANGINGMAN()},
    {"S_CDLHARAMI", new ta::S_CDLHARAMI()},
    {"S_CDLHARAMICROSS", new ta::S_CDLHARAMICROSS()},
    {"S_CDLHIGHWAVE", new ta::S_CDLHIGHWAVE()},
    {"S_CDLHIKKAKE", new ta::S_CDLHIKKAKE()},
    {"S_CDLHIKKAKEMOD", new ta::S_CDLHIKKAKEMOD()},
    {"S_CDLHOMINGPIGEON", new ta::S_CDLHOMINGPIGEON()},
    {"S_CDLIDENTICAL3CROWS", new ta::S_CDLIDENTICAL3CROWS()},
    {"S_CDLINNECK", new ta::S_CDLINNECK()},
    {"S_CDLINVERTEDHAMMER", new ta::S_CDLINVERTEDHAMMER()},
    {"S_CDLKICKING", new ta::S_CDLKICKING()},
    {"S_CDLKICKINGBYLENGTH", new ta::S_CDLKICKINGBYLENGTH()},
    {"S_CDLLADDERBOTTOM", new ta::S_CDLLADDERBOTTOM()},
    {"S_CDLLONGLEGGEDDOJI", new ta::S_CDLLONGLEGGEDDOJI()},
    {"S_CDLLONGLINE", new ta::S_CDLLONGLINE()},
    {"S_CDLMARUBOZU", new ta::S_CDLMARUBOZU()},
    {"S_CDLMATCHINGLOW", new ta::S_CDLMATCHINGLOW()},
    {"S_CDLMATHOLD", new ta::S_CDLMATHOLD()},
    {"S_CDLMORNINGDOJISTAR", new ta::S_CDLMORNINGDOJISTAR()},
    {"S_CDLMORNINGSTAR", new ta::S_CDLMORNINGSTAR()},
    {"S_CDLONNECK", new ta::S_CDLONNECK()},
    {"S_CDLPIERCING", new ta::S_CDLPIERCING()},
    {"S_CDLRICKSHAWMAN", new ta::S_CDLRICKSHAWMAN()},
    {"S_CDLRISEFALL3METHODS", new ta::S_CDLRISEFALL3METHODS()},
    {"S_CDLSEPARATINGLINES", new ta::S_CDLSEPARATINGLINES()},
    {"S_CDLSHOOTINGSTAR", new ta::S_CDLSHOOTINGSTAR()},
    {"S_CDLSHORTLINE", new ta::S_CDLSHORTLINE()},
    {"S_CDLSPINNINGTOP", new ta::S_CDLSPINNINGTOP()},
    {"S_CDLSTALLEDPATTERN", new ta::S_CDLSTALLEDPATTERN()},
    {"S_CDLSTICKSANDWICH", new ta::S_CDLSTICKSANDWICH()},
    {"S_CDLTAKURI", new ta::S_CDLTAKURI()},
    {"S_CDLTASUKIGAP", new ta::S_CDLTASUKIGAP()},
    {"S_CDLTHRUSTING", new ta::S_CDLTHRUSTING()},
    {"S_CDLTRISTAR", new ta::S_CDLTRISTAR()},
    {"S_CDLUNIQUE3RIVER", new ta::S_CDLUNIQUE3RIVER()},
    {"S_CDLUPSIDEGAP2CROWS", new ta::S_CDLUPSIDEGAP2CROWS()},
    {"S_CDLXSIDEGAP3METHODS", new ta::S_CDLXSIDEGAP3METHODS()},
    {"S_CEIL", new ta::S_CEIL()},
    {"S_CMO", new ta::S_CMO()},
    {"S_CORREL", new ta::S_CORREL()},
    {"S_COS", new ta::S_COS()},
    {"S_COSH", new ta::S_COSH()},
    {"S_DEMA", new ta::S_DEMA()},
    {"S_DIV", new ta::S_DIV()},
    {"S_DX", new ta::S_DX()},
    {"S_EMA", new ta::S_EMA()},
    {"S_EXP", new ta::S_EXP()},
    {"S_FLOOR", new ta::S_FLOOR()},
    {"S_HT_DCPERIOD", new ta::S_HT_DCPERIOD()},
    {"S_HT_DCPHASE", new ta::S_HT_DCPHASE()},
    {"S_HT_PHASOR", new ta::S_HT_PHASOR()},
    {"S_HT_SINE", new ta::S_HT_SINE()},
    {"S_HT_TRENDLINE", new ta::S_HT_TRENDLINE()},
    {"S_HT_TRENDMODE", new ta::S_HT_TRENDMODE()},
    {"S_KAMA", new ta::S_KAMA()},
    {"S_LINEARREG", new ta::S_LINEARREG()},
    {"S_LINEARREG_ANGLE", new ta::S_LINEARREG_ANGLE()},
    {"S_LINEARREG_INTERCEPT", new ta::S_LINEARREG_INTERCEPT()},
    {"S_LINEARREG_SLOPE", new ta::S_LINEARREG_SLOPE()},
    {"S_LN", new ta::S_LN()},
    {"S_LOG10", new ta::S_LOG10()},
    {"S_MA", new ta::S_MA()},
    {"S_MACD", new ta::S_MACD()},
    {"S_MACDEXT", new ta::S_MACDEXT()},
    {"S_MACDFIX", new ta::S_MACDFIX()},
    {"S_MAMA", new ta::S_MAMA()},
    {"S_MAVP", new ta::S_MAVP()},
    {"S_MAX", new ta::S_MAX()},
    {"S_MAXINDEX", new ta::S_MAXINDEX()},
    {"S_MEDPRICE", new ta::S_MEDPRICE()},
    {"S_MFI", new ta::S_MFI()},
    {"S_MIDPOINT", new ta::S_MIDPOINT()},
    {"S_MIDPRICE", new ta::S_MIDPRICE()},
    {"S_MIN", new ta::S_MIN()},
    {"S_MININDEX", new ta::S_MININDEX()},
    {"S_MINMAX", new ta::S_MINMAX()},
    {"S_MINMAXINDEX", new ta::S_MINMAXINDEX()},
    {"S_MINUS_DI", new ta::S_MINUS_DI()},
    {"S_MINUS_DM", new ta::S_MINUS_DM()},
    {"S_MOM", new ta::S_MOM()},
    {"S_MULT", new ta::S_MULT()},
    {"S_NATR", new ta::S_NATR()},
    {"S_OBV", new ta::S_OBV()},
    {"S_PLUS_DI", new ta::S_PLUS_DI()},
    {"S_PLUS_DM", new ta::S_PLUS_DM()},
    {"S_PPO", new ta::S_PPO()},
    {"S_ROC", new ta::S_ROC()},
    {"S_ROCP", new ta::S_ROCP()},
    {"S_ROCR", new ta::S_ROCR()},
    {"S_ROCR100", new ta::S_ROCR100()},
    {"S_RSI", new ta::S_RSI()},
    {"S_SAR", new ta::S_SAR()},
    {"S_SAREXT", new ta::S_SAREXT()},
    {"S_SIN", new ta::S_SIN()},
    {"S_SINH", new ta::S_SINH()},
    {"S_SMA", new ta::S_SMA()},
    {"S_SQRT", new ta::S_SQRT()},
    {"S_STDDEV", new ta::S_STDDEV()},
    {"S_STOCH", new ta::S_STOCH()},
    {"S_STOCHF", new ta::S_STOCHF()},
    {"S_STOCHRSI", new ta::S_STOCHRSI()},
    {"S_SUB", new ta::S_SUB()},
    {"S_SUM", new ta::S_SUM()},
    {"S_T3", new ta::S_T3()},
    {"S_TAN", new ta::S_TAN()},
    {"S_TANH", new ta::S_TANH()},
    {"S_TEMA", new ta::S_TEMA()},
    {"S_TRANGE", new ta::S_TRANGE()},
    {"S_TRIMA", new ta::S_TRIMA()},
    {"S_TRIX", new ta::S_TRIX()},
    {"S_TSF", new ta::S_TSF()},
    {"S_TYPPRICE", new ta::S_TYPPRICE()},
    {"S_ULTOSC", new ta::S_ULTOSC()},
    {"S_VAR", new ta::S_VAR()},
    {"S_WCLPRICE", new ta::S_WCLPRICE()},
    {"S_WILLR", new ta::S_WILLR()},
    {"S_WMA", new ta::S_WMA()},
    {"SetCandleSettings", new ta::SetCandleSettings()},
    {"SetCompatibility", new ta::SetCompatibility()},
    {"SetUnstablePeriod", new ta::SetUnstablePeriod()},
    {"T3", new ta::T3()},
    {"TAN", new ta::TAN()},
    {"TANH", new ta::TANH()},
    {"TEMA", new ta::TEMA()},
    {"TRANGE", new ta::TRANGE()},
    {"TRIMA", new ta::TRIMA()},
    {"TRIX", new ta::TRIX()},
    {"TSF", new ta::TSF()},
    {"TYPPRICE", new ta::TYPPRICE()},
    {"ULTOSC", new ta::ULTOSC()},
    {"VAR", new ta::VAR()},
    {"WCLPRICE", new ta::WCLPRICE()},
    {"WILLR", new ta::WILLR()},
    {"WMA", new ta::WMA()}
};

ta::ta *ta_reflector::get(std::string name) {
    return ta_reflector::factory_map[name];
}

ta::ta *reflect(std::string name) {
    return ta_reflector::get(name);
}

