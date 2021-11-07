from multiprocessing import Pool
from multiprocessing import cpu_count

def f(x):
    while True:
        x*x

if __name__ == '__main__':
    processes = 5
    print ('utilizing %d cores\n' % processes)
    pool = Pool(processes)
    pool.map(f, range(processes))
    