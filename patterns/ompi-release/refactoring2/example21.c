#if defined(HAVE_MPI2_THREAD) && HAVE_MPI2_THREAD
if (!is_mpi_multithreaded)
#endif /* HAVE_MPI2_THREAD */
        {
          if (*win != MPI_WIN_NULL)
            vt_win_create(*win, comm);
        }