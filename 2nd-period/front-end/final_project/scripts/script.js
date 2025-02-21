document.querySelectorAll('.photo').forEach(photo => {
    photo.addEventListener('mousemove', e => {
      const rect = photo.getBoundingClientRect();
      const x = e.clientX - rect.left;
      const y = e.clientY - rect.top;
      photo.querySelector('img').style.transformOrigin = `${x}px ${y}px`;
      photo.querySelector('img').style.transform = 'scale(1.5)';
    });
  
    photo.addEventListener('mouseleave', () => {
      photo.querySelector('img').style.transform = 'scale(1)';
      photo.querySelector('img').style.transformOrigin = 'center';
    });
  });