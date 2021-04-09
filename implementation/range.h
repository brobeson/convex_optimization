#ifndef RANGE_H
#define RANGE_H

namespace gsl
{
    template <class T, T minimum, T maximum>
    class range final
    {
    public:
        range(const T& v): m_value(v) {}
        range(const range& src) = default;
        range(range&& src) = default;

        ~range() noexcept = default;

        range& operator=(const range& src) = default;
        range& operator=(range&& src) = default;

        T value() const { return m_value; }

    private:
        T m_value;
    };

    template <class T>
    using normal_range = range<T, 0, 1>;

    template <class T>
    using rgb_range = range<T, 0, 255>;
}

#endif
