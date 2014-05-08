#ifndef __TA_HH__
#define __TA_HH__

#undef MAX
#undef MIN

#include <boost/archive/text_oarchive.hpp>
#include <ta-lib/ta_common.h>

namespace ta {

class ta { };

class ACOS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ACOS() { };
    ACOS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ACOS *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ACOS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ACOS() { };
    S_ACOS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ACOS *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AD() { };
    AD(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    AD *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AD() { };
    S_AD(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    S_AD *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADD() { };
    ADD(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    ADD *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADD() { };
    S_ADD(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADD *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADOSC() { };
    ADOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADOSC() { };
    S_ADOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADX() { };
    ADX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADX *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADX() { };
    S_ADX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADX *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADXR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADXR() { };
    ADXR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADXR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADXR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADXR() { };
    S_ADXR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADXR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class APO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    APO() { };
    APO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    APO *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_APO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_APO() { };
    S_APO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_APO *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AROON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outAroonDown;
        ar & outAroonUp;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    AROON() { };
    AROON(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    AROON *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class S_AROON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outAroonDown;
        ar & outAroonUp;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    S_AROON() { };
    S_AROON(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    S_AROON *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class AROONOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AROONOSC() { };
    AROONOSC(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    AROONOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AROONOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AROONOSC() { };
    S_AROONOSC(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_AROONOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ASIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ASIN() { };
    ASIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ASIN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ASIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ASIN() { };
    S_ASIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ASIN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ATAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ATAN() { };
    ATAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ATAN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ATAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ATAN() { };
    S_ATAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ATAN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ATR() { };
    ATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ATR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ATR() { };
    S_ATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ATR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AVGPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AVGPRICE() { };
    AVGPRICE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    AVGPRICE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AVGPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AVGPRICE() { };
    S_AVGPRICE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_AVGPRICE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class BBANDS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outRealUpperBand;
        ar & outRealMiddleBand;
        ar & outRealLowerBand;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    BBANDS() { };
    BBANDS(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    BBANDS *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class S_BBANDS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outRealUpperBand;
        ar & outRealMiddleBand;
        ar & outRealLowerBand;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    S_BBANDS() { };
    S_BBANDS(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    S_BBANDS *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class BETA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    BETA() { };
    BETA(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    BETA *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_BETA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_BETA() { };
    S_BETA(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_BETA *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class BOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    BOP() { };
    BOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    BOP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_BOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_BOP() { };
    S_BOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_BOP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CCI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CCI() { };
    CCI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CCI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CCI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CCI() { };
    S_CCI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CCI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CDL2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL2CROWS() { };
    CDL2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL2CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL2CROWS() { };
    S_CDL2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL2CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3BLACKCROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3BLACKCROWS() { };
    CDL3BLACKCROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3BLACKCROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3BLACKCROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3BLACKCROWS() { };
    S_CDL3BLACKCROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3BLACKCROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3INSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3INSIDE() { };
    CDL3INSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3INSIDE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3INSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3INSIDE() { };
    S_CDL3INSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3INSIDE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3LINESTRIKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3LINESTRIKE() { };
    CDL3LINESTRIKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3LINESTRIKE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3LINESTRIKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3LINESTRIKE() { };
    S_CDL3LINESTRIKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3LINESTRIKE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3OUTSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3OUTSIDE() { };
    CDL3OUTSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3OUTSIDE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3OUTSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3OUTSIDE() { };
    S_CDL3OUTSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3OUTSIDE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3STARSINSOUTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3STARSINSOUTH() { };
    CDL3STARSINSOUTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3STARSINSOUTH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3STARSINSOUTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3STARSINSOUTH() { };
    S_CDL3STARSINSOUTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3STARSINSOUTH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3WHITESOLDIERS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3WHITESOLDIERS() { };
    CDL3WHITESOLDIERS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3WHITESOLDIERS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3WHITESOLDIERS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3WHITESOLDIERS() { };
    S_CDL3WHITESOLDIERS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3WHITESOLDIERS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLABANDONEDBABY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLABANDONEDBABY() { };
    CDLABANDONEDBABY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLABANDONEDBABY *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLABANDONEDBABY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLABANDONEDBABY() { };
    S_CDLABANDONEDBABY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLABANDONEDBABY *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLADVANCEBLOCK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLADVANCEBLOCK() { };
    CDLADVANCEBLOCK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLADVANCEBLOCK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLADVANCEBLOCK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLADVANCEBLOCK() { };
    S_CDLADVANCEBLOCK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLADVANCEBLOCK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLBELTHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLBELTHOLD() { };
    CDLBELTHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLBELTHOLD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLBELTHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLBELTHOLD() { };
    S_CDLBELTHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLBELTHOLD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLBREAKAWAY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLBREAKAWAY() { };
    CDLBREAKAWAY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLBREAKAWAY *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLBREAKAWAY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLBREAKAWAY() { };
    S_CDLBREAKAWAY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLBREAKAWAY *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCLOSINGMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCLOSINGMARUBOZU() { };
    CDLCLOSINGMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCLOSINGMARUBOZU *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCLOSINGMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCLOSINGMARUBOZU() { };
    S_CDLCLOSINGMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCLOSINGMARUBOZU *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCONCEALBABYSWALL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCONCEALBABYSWALL() { };
    CDLCONCEALBABYSWALL(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCONCEALBABYSWALL *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCONCEALBABYSWALL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCONCEALBABYSWALL() { };
    S_CDLCONCEALBABYSWALL(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCONCEALBABYSWALL *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCOUNTERATTACK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCOUNTERATTACK() { };
    CDLCOUNTERATTACK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCOUNTERATTACK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCOUNTERATTACK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCOUNTERATTACK() { };
    S_CDLCOUNTERATTACK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCOUNTERATTACK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDARKCLOUDCOVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDARKCLOUDCOVER() { };
    CDLDARKCLOUDCOVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDARKCLOUDCOVER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDARKCLOUDCOVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDARKCLOUDCOVER() { };
    S_CDLDARKCLOUDCOVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDARKCLOUDCOVER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDOJI() { };
    CDLDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDOJI() { };
    S_CDLDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDOJISTAR() { };
    CDLDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDOJISTAR() { };
    S_CDLDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDRAGONFLYDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDRAGONFLYDOJI() { };
    CDLDRAGONFLYDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDRAGONFLYDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDRAGONFLYDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDRAGONFLYDOJI() { };
    S_CDLDRAGONFLYDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDRAGONFLYDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLENGULFING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLENGULFING() { };
    CDLENGULFING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLENGULFING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLENGULFING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLENGULFING() { };
    S_CDLENGULFING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLENGULFING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLEVENINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLEVENINGDOJISTAR() { };
    CDLEVENINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLEVENINGDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLEVENINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLEVENINGDOJISTAR() { };
    S_CDLEVENINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLEVENINGDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLEVENINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLEVENINGSTAR() { };
    CDLEVENINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLEVENINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLEVENINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLEVENINGSTAR() { };
    S_CDLEVENINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLEVENINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLGAPSIDESIDEWHITE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLGAPSIDESIDEWHITE() { };
    CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLGAPSIDESIDEWHITE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLGAPSIDESIDEWHITE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLGAPSIDESIDEWHITE() { };
    S_CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLGAPSIDESIDEWHITE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLGRAVESTONEDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLGRAVESTONEDOJI() { };
    CDLGRAVESTONEDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLGRAVESTONEDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLGRAVESTONEDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLGRAVESTONEDOJI() { };
    S_CDLGRAVESTONEDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLGRAVESTONEDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHAMMER() { };
    CDLHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHAMMER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHAMMER() { };
    S_CDLHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHAMMER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHANGINGMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHANGINGMAN() { };
    CDLHANGINGMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHANGINGMAN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHANGINGMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHANGINGMAN() { };
    S_CDLHANGINGMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHANGINGMAN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHARAMI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHARAMI() { };
    CDLHARAMI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHARAMI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHARAMI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHARAMI() { };
    S_CDLHARAMI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHARAMI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHARAMICROSS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHARAMICROSS() { };
    CDLHARAMICROSS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHARAMICROSS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHARAMICROSS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHARAMICROSS() { };
    S_CDLHARAMICROSS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHARAMICROSS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIGHWAVE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIGHWAVE() { };
    CDLHIGHWAVE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIGHWAVE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIGHWAVE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIGHWAVE() { };
    S_CDLHIGHWAVE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIGHWAVE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIKKAKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIKKAKE() { };
    CDLHIKKAKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIKKAKE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIKKAKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIKKAKE() { };
    S_CDLHIKKAKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIKKAKE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIKKAKEMOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIKKAKEMOD() { };
    CDLHIKKAKEMOD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIKKAKEMOD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIKKAKEMOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIKKAKEMOD() { };
    S_CDLHIKKAKEMOD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIKKAKEMOD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHOMINGPIGEON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHOMINGPIGEON() { };
    CDLHOMINGPIGEON(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHOMINGPIGEON *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHOMINGPIGEON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHOMINGPIGEON() { };
    S_CDLHOMINGPIGEON(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHOMINGPIGEON *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLIDENTICAL3CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLIDENTICAL3CROWS() { };
    CDLIDENTICAL3CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLIDENTICAL3CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLIDENTICAL3CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLIDENTICAL3CROWS() { };
    S_CDLIDENTICAL3CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLIDENTICAL3CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLINNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLINNECK() { };
    CDLINNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLINNECK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLINNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLINNECK() { };
    S_CDLINNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLINNECK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLINVERTEDHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLINVERTEDHAMMER() { };
    CDLINVERTEDHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLINVERTEDHAMMER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLINVERTEDHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLINVERTEDHAMMER() { };
    S_CDLINVERTEDHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLINVERTEDHAMMER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLKICKING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLKICKING() { };
    CDLKICKING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLKICKING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLKICKING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLKICKING() { };
    S_CDLKICKING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLKICKING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLKICKINGBYLENGTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLKICKINGBYLENGTH() { };
    CDLKICKINGBYLENGTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLKICKINGBYLENGTH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLKICKINGBYLENGTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLKICKINGBYLENGTH() { };
    S_CDLKICKINGBYLENGTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLKICKINGBYLENGTH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLADDERBOTTOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLADDERBOTTOM() { };
    CDLLADDERBOTTOM(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLADDERBOTTOM *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLADDERBOTTOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLADDERBOTTOM() { };
    S_CDLLADDERBOTTOM(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLADDERBOTTOM *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLONGLEGGEDDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLONGLEGGEDDOJI() { };
    CDLLONGLEGGEDDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLONGLEGGEDDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLONGLEGGEDDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLONGLEGGEDDOJI() { };
    S_CDLLONGLEGGEDDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLONGLEGGEDDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLONGLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLONGLINE() { };
    CDLLONGLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLONGLINE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLONGLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLONGLINE() { };
    S_CDLLONGLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLONGLINE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMARUBOZU() { };
    CDLMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMARUBOZU *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMARUBOZU() { };
    S_CDLMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMARUBOZU *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMATCHINGLOW : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMATCHINGLOW() { };
    CDLMATCHINGLOW(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMATCHINGLOW *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMATCHINGLOW : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMATCHINGLOW() { };
    S_CDLMATCHINGLOW(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMATCHINGLOW *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMATHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMATHOLD() { };
    CDLMATHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMATHOLD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMATHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMATHOLD() { };
    S_CDLMATHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMATHOLD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMORNINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMORNINGDOJISTAR() { };
    CDLMORNINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMORNINGDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMORNINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMORNINGDOJISTAR() { };
    S_CDLMORNINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMORNINGDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMORNINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMORNINGSTAR() { };
    CDLMORNINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMORNINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMORNINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMORNINGSTAR() { };
    S_CDLMORNINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMORNINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLONNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLONNECK() { };
    CDLONNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLONNECK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLONNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLONNECK() { };
    S_CDLONNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLONNECK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLPIERCING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLPIERCING() { };
    CDLPIERCING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLPIERCING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLPIERCING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLPIERCING() { };
    S_CDLPIERCING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLPIERCING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLRICKSHAWMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLRICKSHAWMAN() { };
    CDLRICKSHAWMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLRICKSHAWMAN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLRICKSHAWMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLRICKSHAWMAN() { };
    S_CDLRICKSHAWMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLRICKSHAWMAN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLRISEFALL3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLRISEFALL3METHODS() { };
    CDLRISEFALL3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLRISEFALL3METHODS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLRISEFALL3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLRISEFALL3METHODS() { };
    S_CDLRISEFALL3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLRISEFALL3METHODS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSEPARATINGLINES : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSEPARATINGLINES() { };
    CDLSEPARATINGLINES(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSEPARATINGLINES *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSEPARATINGLINES : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSEPARATINGLINES() { };
    S_CDLSEPARATINGLINES(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSEPARATINGLINES *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSHOOTINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSHOOTINGSTAR() { };
    CDLSHOOTINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSHOOTINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSHOOTINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSHOOTINGSTAR() { };
    S_CDLSHOOTINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSHOOTINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSHORTLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSHORTLINE() { };
    CDLSHORTLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSHORTLINE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSHORTLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSHORTLINE() { };
    S_CDLSHORTLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSHORTLINE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSPINNINGTOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSPINNINGTOP() { };
    CDLSPINNINGTOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSPINNINGTOP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSPINNINGTOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSPINNINGTOP() { };
    S_CDLSPINNINGTOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSPINNINGTOP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSTALLEDPATTERN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSTALLEDPATTERN() { };
    CDLSTALLEDPATTERN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSTALLEDPATTERN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSTALLEDPATTERN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSTALLEDPATTERN() { };
    S_CDLSTALLEDPATTERN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSTALLEDPATTERN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSTICKSANDWICH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSTICKSANDWICH() { };
    CDLSTICKSANDWICH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSTICKSANDWICH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSTICKSANDWICH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSTICKSANDWICH() { };
    S_CDLSTICKSANDWICH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSTICKSANDWICH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTAKURI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTAKURI() { };
    CDLTAKURI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTAKURI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTAKURI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTAKURI() { };
    S_CDLTAKURI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTAKURI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTASUKIGAP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTASUKIGAP() { };
    CDLTASUKIGAP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTASUKIGAP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTASUKIGAP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTASUKIGAP() { };
    S_CDLTASUKIGAP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTASUKIGAP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTHRUSTING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTHRUSTING() { };
    CDLTHRUSTING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTHRUSTING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTHRUSTING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTHRUSTING() { };
    S_CDLTHRUSTING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTHRUSTING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTRISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTRISTAR() { };
    CDLTRISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTRISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTRISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTRISTAR() { };
    S_CDLTRISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTRISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLUNIQUE3RIVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLUNIQUE3RIVER() { };
    CDLUNIQUE3RIVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLUNIQUE3RIVER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLUNIQUE3RIVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLUNIQUE3RIVER() { };
    S_CDLUNIQUE3RIVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLUNIQUE3RIVER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLUPSIDEGAP2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLUPSIDEGAP2CROWS() { };
    CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLUPSIDEGAP2CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLUPSIDEGAP2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLUPSIDEGAP2CROWS() { };
    S_CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLUPSIDEGAP2CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLXSIDEGAP3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLXSIDEGAP3METHODS() { };
    CDLXSIDEGAP3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLXSIDEGAP3METHODS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLXSIDEGAP3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLXSIDEGAP3METHODS() { };
    S_CDLXSIDEGAP3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLXSIDEGAP3METHODS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CEIL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CEIL() { };
    CEIL(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    CEIL *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CEIL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CEIL() { };
    S_CEIL(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_CEIL *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CMO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CMO() { };
    CMO(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CMO *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CMO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CMO() { };
    S_CMO(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CMO *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CORREL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CORREL() { };
    CORREL(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CORREL *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CORREL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CORREL() { };
    S_CORREL(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CORREL *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class COS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    COS() { };
    COS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    COS *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_COS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_COS() { };
    S_COS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_COS *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class COSH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    COSH() { };
    COSH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    COSH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_COSH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_COSH() { };
    S_COSH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_COSH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DEMA() { };
    DEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    DEMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DEMA() { };
    S_DEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_DEMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DIV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DIV() { };
    DIV(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    DIV *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DIV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DIV() { };
    S_DIV(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_DIV *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DX() { };
    DX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    DX *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DX() { };
    S_DX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_DX *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class EMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    EMA() { };
    EMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    EMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_EMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_EMA() { };
    S_EMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_EMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class EXP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    EXP() { };
    EXP(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    EXP *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_EXP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_EXP() { };
    S_EXP(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_EXP *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class FLOOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    FLOOR() { };
    FLOOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    FLOOR *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_FLOOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_FLOOR() { };
    S_FLOOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_FLOOR *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_DCPERIOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_DCPERIOD() { };
    HT_DCPERIOD(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_DCPERIOD *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_DCPERIOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_DCPERIOD() { };
    S_HT_DCPERIOD(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_DCPERIOD *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_DCPHASE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_DCPHASE() { };
    HT_DCPHASE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_DCPHASE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_DCPHASE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_DCPHASE() { };
    S_HT_DCPHASE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_DCPHASE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_PHASOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInPhase;
        ar & outQuadrature;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    HT_PHASOR() { };
    HT_PHASOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    HT_PHASOR *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class S_HT_PHASOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInPhase;
        ar & outQuadrature;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    S_HT_PHASOR() { };
    S_HT_PHASOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    S_HT_PHASOR *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class HT_SINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSine;
        ar & outLeadSine;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    HT_SINE() { };
    HT_SINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    HT_SINE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class S_HT_SINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSine;
        ar & outLeadSine;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    S_HT_SINE() { };
    S_HT_SINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    S_HT_SINE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class HT_TRENDLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_TRENDLINE() { };
    HT_TRENDLINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_TRENDLINE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_TRENDLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_TRENDLINE() { };
    S_HT_TRENDLINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_TRENDLINE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_TRENDMODE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    HT_TRENDMODE() { };
    HT_TRENDMODE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    HT_TRENDMODE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_HT_TRENDMODE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_HT_TRENDMODE() { };
    S_HT_TRENDMODE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    S_HT_TRENDMODE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class KAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    KAMA() { };
    KAMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    KAMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_KAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_KAMA() { };
    S_KAMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_KAMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG() { };
    LINEARREG(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG() { };
    S_LINEARREG(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_ANGLE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_ANGLE() { };
    LINEARREG_ANGLE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_ANGLE *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_ANGLE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_ANGLE() { };
    S_LINEARREG_ANGLE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_ANGLE *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_INTERCEPT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_INTERCEPT() { };
    LINEARREG_INTERCEPT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_INTERCEPT *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_INTERCEPT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_INTERCEPT() { };
    S_LINEARREG_INTERCEPT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_INTERCEPT *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_SLOPE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_SLOPE() { };
    LINEARREG_SLOPE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_SLOPE *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_SLOPE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_SLOPE() { };
    S_LINEARREG_SLOPE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_SLOPE *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LN() { };
    LN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    LN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LN() { };
    S_LN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_LN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LOG10 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LOG10() { };
    LOG10(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    LOG10 *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LOG10 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LOG10() { };
    S_LOG10(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_LOG10 *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MA() { };
    MA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    MA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MA() { };
    S_MA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_MA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MACD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACD() { };
    MACD(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACD *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACD() { };
    S_MACD(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACD *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MACDEXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInFastMAType;
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSlowMAType;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & optInSignalMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACDEXT() { };
    MACDEXT(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACDEXT *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACDEXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInFastMAType;
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSlowMAType;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & optInSignalMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACDEXT() { };
    S_MACDEXT(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACDEXT *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MACDFIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACDFIX() { };
    MACDFIX(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACDFIX *create(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACDFIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACDFIX() { };
    S_MACDFIX(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACDFIX *create(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastLimit; /* From 0.01 to 0.99 */
        ar & optInSlowLimit; /* From 0.01 to 0.99 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMAMA;
        ar & outFAMA;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    MAMA() { };
    MAMA(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    MAMA *create(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class S_MAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastLimit; /* From 0.01 to 0.99 */
        ar & optInSlowLimit; /* From 0.01 to 0.99 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMAMA;
        ar & outFAMA;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    S_MAMA() { };
    S_MAMA(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    S_MAMA *create(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class MAVP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & inPeriods;
        ar & optInMinPeriod; /* From 2 to 100000 */
        ar & optInMaxPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    double *inPeriods;
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MAVP() { };
    MAVP(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    MAVP *create(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MAVP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & inPeriods;
        ar & optInMinPeriod; /* From 2 to 100000 */
        ar & optInMaxPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    float *inPeriods;
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MAVP() { };
    S_MAVP(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_MAVP *create(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MAX() { };
    MAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MAX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MAX() { };
    S_MAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MAX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    MAXINDEX() { };
    MAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    MAXINDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_MAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_MAXINDEX() { };
    S_MAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    S_MAXINDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class MEDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MEDPRICE() { };
    MEDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    MEDPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MEDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MEDPRICE() { };
    S_MEDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    S_MEDPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MFI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MFI() { };
    MFI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MFI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MFI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MFI() { };
    S_MFI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MFI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIDPOINT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIDPOINT() { };
    MIDPOINT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIDPOINT *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIDPOINT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIDPOINT() { };
    S_MIDPOINT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIDPOINT *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIDPRICE() { };
    MIDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIDPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIDPRICE() { };
    S_MIDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIDPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIN() { };
    MIN(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIN *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIN() { };
    S_MIN(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIN *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MININDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    MININDEX() { };
    MININDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    MININDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_MININDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_MININDEX() { };
    S_MININDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    S_MININDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class MINMAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMin;
        ar & outMax;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    MINMAX() { };
    MINMAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    MINMAX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class S_MINMAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMin;
        ar & outMax;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    S_MINMAX() { };
    S_MINMAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    S_MINMAX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class MINMAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMinIdx;
        ar & outMaxIdx;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    MINMAXINDEX() { };
    MINMAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    MINMAXINDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class S_MINMAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMinIdx;
        ar & outMaxIdx;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    S_MINMAXINDEX() { };
    S_MINMAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    S_MINMAXINDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class MINUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MINUS_DI() { };
    MINUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MINUS_DI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MINUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MINUS_DI() { };
    S_MINUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MINUS_DI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MINUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MINUS_DM() { };
    MINUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MINUS_DM *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MINUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MINUS_DM() { };
    S_MINUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MINUS_DM *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MOM() { };
    MOM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MOM *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MOM() { };
    S_MOM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MOM *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MULT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MULT() { };
    MULT(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    MULT *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MULT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MULT() { };
    S_MULT(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_MULT *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class NATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    NATR() { };
    NATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    NATR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_NATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_NATR() { };
    S_NATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_NATR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class OBV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    double *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    OBV() { };
    OBV(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    OBV *create(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_OBV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    float *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_OBV() { };
    S_OBV(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    S_OBV *create(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PLUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PLUS_DI() { };
    PLUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    PLUS_DI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PLUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PLUS_DI() { };
    S_PLUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_PLUS_DI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PLUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PLUS_DM() { };
    PLUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    PLUS_DM *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PLUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PLUS_DM() { };
    S_PLUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_PLUS_DM *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PPO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PPO() { };
    PPO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    PPO *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PPO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PPO() { };
    S_PPO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_PPO *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROC() { };
    ROC(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROC *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROC() { };
    S_ROC(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROC *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCP() { };
    ROCP(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCP *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCP() { };
    S_ROCP(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCP *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCR() { };
    ROCR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCR *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCR() { };
    S_ROCR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCR *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCR100 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCR100() { };
    ROCR100(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCR100 *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCR100 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCR100() { };
    S_ROCR100(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCR100 *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class RSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    RSI() { };
    RSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    RSI *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_RSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_RSI() { };
    S_RSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_RSI *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInAcceleration; /* From 0 to TA_REAL_MAX */
        ar & optInMaximum; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SAR() { };
    SAR(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    SAR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInAcceleration; /* From 0 to TA_REAL_MAX */
        ar & optInMaximum; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SAR() { };
    S_SAR(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    S_SAR *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SAREXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SAREXT() { };
    SAREXT(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    SAREXT *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SAREXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SAREXT() { };
    S_SAREXT(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    S_SAREXT *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SIN() { };
    SIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SIN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SIN() { };
    S_SIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SIN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SINH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SINH() { };
    SINH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SINH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SINH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SINH() { };
    S_SINH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SINH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SMA() { };
    SMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    SMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SMA() { };
    S_SMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_SMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SQRT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SQRT() { };
    SQRT(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SQRT *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SQRT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SQRT() { };
    S_SQRT(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SQRT *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class STDDEV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    STDDEV() { };
    STDDEV(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    STDDEV *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_STDDEV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_STDDEV() { };
    S_STDDEV(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    S_STDDEV *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class STOCH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInSlowK_Period; /* From 1 to 100000 */
        ar & optInSlowK_MAType;
        ar & optInSlowD_Period; /* From 1 to 100000 */
        ar & optInSlowD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSlowK;
        ar & outSlowD;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    STOCH() { };
    STOCH(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    STOCH *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class S_STOCH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInSlowK_Period; /* From 1 to 100000 */
        ar & optInSlowK_MAType;
        ar & optInSlowD_Period; /* From 1 to 100000 */
        ar & optInSlowD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSlowK;
        ar & outSlowD;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    S_STOCH() { };
    S_STOCH(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    S_STOCH *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class STOCHF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    STOCHF() { };
    STOCHF(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    STOCHF *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class S_STOCHF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    S_STOCHF() { };
    S_STOCHF(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    S_STOCHF *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class STOCHRSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    STOCHRSI() { };
    STOCHRSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    STOCHRSI *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class S_STOCHRSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    S_STOCHRSI() { };
    S_STOCHRSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    S_STOCHRSI *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class SUB : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SUB() { };
    SUB(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    SUB *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SUB : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SUB() { };
    S_SUB(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_SUB *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SUM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SUM() { };
    SUM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    SUM *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SUM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SUM() { };
    S_SUM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_SUM *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class T3 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInVFactor; /* From 0 to 1 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    T3() { };
    T3(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    T3 *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_T3 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInVFactor; /* From 0 to 1 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_T3() { };
    S_T3(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    S_T3 *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TAN() { };
    TAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TAN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TAN() { };
    S_TAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_TAN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TANH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TANH() { };
    TANH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TANH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TANH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TANH() { };
    S_TANH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_TANH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TEMA() { };
    TEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TEMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TEMA() { };
    S_TEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TEMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRANGE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRANGE() { };
    TRANGE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TRANGE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRANGE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRANGE() { };
    S_TRANGE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRANGE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRIMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRIMA() { };
    TRIMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TRIMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRIMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRIMA() { };
    S_TRIMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRIMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRIX() { };
    TRIX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TRIX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRIX() { };
    S_TRIX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRIX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TSF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TSF() { };
    TSF(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TSF *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TSF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TSF() { };
    S_TSF(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TSF *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TYPPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TYPPRICE() { };
    TYPPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TYPPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TYPPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TYPPRICE() { };
    S_TYPPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_TYPPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ULTOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod1; /* From 1 to 100000 */
        ar & optInTimePeriod2; /* From 1 to 100000 */
        ar & optInTimePeriod3; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ULTOSC() { };
    ULTOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    ULTOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ULTOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod1; /* From 1 to 100000 */
        ar & optInTimePeriod2; /* From 1 to 100000 */
        ar & optInTimePeriod3; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ULTOSC() { };
    S_ULTOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    S_ULTOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class VAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    VAR() { };
    VAR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    VAR *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_VAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_VAR() { };
    S_VAR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    S_VAR *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WCLPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WCLPRICE() { };
    WCLPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    WCLPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WCLPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WCLPRICE() { };
    S_WCLPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_WCLPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WILLR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WILLR() { };
    WILLR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    WILLR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WILLR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WILLR() { };
    S_WILLR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_WILLR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WMA() { };
    WMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    WMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WMA() { };
    S_WMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_WMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SetUnstablePeriod : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & id;
        ar & unstablePeriod;
    }

public:
    TA_FuncUnstId id;
    unsigned unstablePeriod;

    SetUnstablePeriod() { };
    SetUnstablePeriod(TA_FuncUnstId id, unsigned unstablePeriod);
    SetUnstablePeriod *create(TA_FuncUnstId id, unsigned unstablePeriod);
    void update(TA_FuncUnstId id, unsigned unstablePeriod);
    TA_RetCode run();
};

class SetCompatibility : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & value;
    }

public:
    TA_Compatibility value;

    SetCompatibility() { };
    SetCompatibility(TA_Compatibility value);
    SetCompatibility *create(TA_Compatibility value);
    void update(TA_Compatibility value);
    TA_RetCode run();
};

class SetCandleSettings : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & settingType; 
        ar & rangeType; 
        ar & avgPeriod; 
        ar & factor;
    }

public:
    TA_CandleSettingType settingType; 
    TA_RangeType rangeType; 
    int avgPeriod; 
    double factor;

    SetCandleSettings() { };
    SetCandleSettings(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    SetCandleSettings *create(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    void update(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    TA_RetCode run();
};

class RestoreCandleDefaultSettings : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & settingType;
    }

public:
    TA_CandleSettingType settingType;

    RestoreCandleDefaultSettings() { };
    RestoreCandleDefaultSettings(TA_CandleSettingType settingType);
    RestoreCandleDefaultSettings *create(TA_CandleSettingType settingType);
    void update(TA_CandleSettingType settingType);
    TA_RetCode run();
};

}

#endif // __TA_HH__
